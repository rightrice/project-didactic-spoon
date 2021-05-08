#include <stdio.h>
#include <stdlib.h>

int main( int argc, char * argv[]){
	char * credit = "credit score";
	printf("\n");
	printf("credit worthiness is based on your %s.\n", credit);
	char * buf = credit;
	int count = 0;
	while (*buf != '\0'){
		printf("%c\n", *buf);
		buf++;
		count++;
	}
	printf("score %d is characters long", count);
	exit(0);
}