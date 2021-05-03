#include <stdio.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <ws2def.h>
#pragma comment(lib, "Ws2_32.lib")

int main(int argc, char * argv[ ] ) { 
	WSADATA wsaData;
	
	int iResult;

	iResult = WSAStartup(MAKEWORD(2,2), &wsaData);
	if (iResult != 0) {
		printf("WSAStartup failed: %d\n", iResult);
		return 1;
	}
	
	struct addrinfo *result = NULL,
                *ptr = NULL,
                hints;

	ZeroMemory( &hints, sizeof(hints) );
		hints.ai_family = AF_UNSPEC;
		hints.ai_socktype = SOCK_STREAM;
		hints.ai_protocol = IPPROTO_TCP;

	#define DEFAULT_PORT "80"

	iResult = getaddrinfo("www.google.com", DEFAULT_PORT, &hints, &result);
	if (iResult != 0) {
		printf("getaddrinfo failed: %d\n", iResult);
		WSACleanup();
		return 1;
	}
	
	SOCKET ConnectSocket = INVALID_SOCKET;
	
    for(ptr=result; ptr != NULL ;ptr=ptr->ai_next) {

		ConnectSocket = socket(ptr->ai_family, ptr->ai_socktype, 
			ptr->ai_protocol);
		
		if (ConnectSocket == INVALID_SOCKET) {
			printf("Error at socket(): %ld\n", WSAGetLastError());
			freeaddrinfo(result);
			WSACleanup();
			return 1;
		}
		
		iResult = connect( ConnectSocket, ptr->ai_addr, (int)ptr->ai_addrlen);
		if (iResult == SOCKET_ERROR) {
			closesocket(ConnectSocket);
			ConnectSocket = INVALID_SOCKET;
		}
	}

	freeaddrinfo(result);

	if (ConnectSocket == INVALID_SOCKET) {
		printf("Unable to connect to server!\n");
		WSACleanup();
		return 1;
	}	
	
	#define DEFAULT_BUFLEN 512

	int recvbuflen = DEFAULT_BUFLEN;

	const char *sendbuf = "GET /\r\n";
	char recvbuf[DEFAULT_BUFLEN];

	iResult;

	iResult = send(ConnectSocket, sendbuf, (int) strlen(sendbuf), 0);
	if (iResult == SOCKET_ERROR) {
		printf("send failed: %d\n", WSAGetLastError());
		closesocket(ConnectSocket);
		WSACleanup();
		return 1;
	}

	printf("Bytes Sent: %ld\n", iResult);
	
	char format[10];
	do {
		iResult = recv(ConnectSocket, recvbuf, recvbuflen, 0);
		if (iResult > 0)
			printf( recvbuf, 1, iResult, "Bytes recieved: %d\n" );
		else if (iResult == 0)
			printf("\n\nConnection closed\n");
		else
			printf("recv failed: %d\n", WSAGetLastError());
	} while (iResult > 0);

	iResult = shutdown(ConnectSocket, SD_SEND);
	if (iResult == SOCKET_ERROR) {
		printf("shutdown failed: %d\n", WSAGetLastError());
		closesocket(ConnectSocket);
		WSACleanup();
		return 1;
	}
	
	closesocket(ConnectSocket);
	WSACleanup();	
	return 0;
}

