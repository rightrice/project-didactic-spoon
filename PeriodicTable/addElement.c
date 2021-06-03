// Add Element

#include "periodic-header.h"

struct element {
	char elementName[50];
	char sb[5];
	int atm;
	float atms;
	char block;
	char atc[20];
	char notes[5000];
	struct element *next;
};

struct element *head = NULL;
struct element *current = NULL;

void printElements(){
	struct element *ptr = head;
	printf("\n\n\t\t   Element Creation:\n ");
	while(ptr != NULL){
		printf("Element Name: %s\n",ptr->elementName)
		ptr = ptr->next;
	}
}

void insertFirst(char elementName, char sb, int atm, float atms, char block, char notes){
	struct element *link = (struct element*) malloc(sizeof(struct element));
	link->elementName;
	link->sb;
	link->atm;
	link->atms;
	link->block;
	link->notes;
	
	link->next = head;
	
	head = link;
}

// Check for empty list
bool listEmpty(){
	return head == NULL;
}

int length(){
	int length = 0;
	struct element *current;
	
	for(current = head; current != NULL; current = current->next){
		length++;
	}
	return length;
}

// element by name
struct element* find(char elementName){
	struct element* current = head;
	if(head == NULL){
		return NULL;
	}
}