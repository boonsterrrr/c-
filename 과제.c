#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct call {
	char name[50];
	char number[14];
	char email[50];
}contact;

void screen(){
	printf("Contacts Management Program\n");
	printf("1. Add Contacts\n");
	printf("2. Search Contacts\n");
	printf("3. Modift Contacts\n");
	printf("4. Display All Contacts\n");
	printf("5. Sort Contacts\n");
	printf("6. Exit\n");
	printf("Select: ");
}

void addcon() {
	contact book;
	printf("Insert Name: ");
	scanf("%s", &book.name);
	printf("Insert Phone Number: ");
	scanf("%s", &book.number);
	printf("Insert Email: ");
	scanf("%s", &book.email);
	printf("One Contact is Added.\n");
}

void searchcon(contact book[],int size, char* word) {
	for (int i = 0; i < size; i++) {
		if (strstr(book[i].name, word) ||
			strstr(book[i].number, word) ||
			strstr(book[i].email, word)) {

			printf("Name: %s ", book[i].name);
			printf("Phone Number: %s", book[i].number);
			printf("Email: %s\n", book[i].email);
		}
		else
			printf("Unable to fine the contact.");
	}
	
}

int main() {
	contact book[100];
	FILE* ct;
	int a;
	screen();
	scanf("%d", &a);


	if (a == 1) {
		ct = fopen("contact.txt", "a");
		addcon();
		screen();
	}

	if (a == 2) {
		ct = fopen("contact.txt", "r");
		char word;
		printf("Enter Name / Phone Number / Email: ");
		scanf("%s", &word);
		
		searchcon(book ,sizeof(book), word);
		
	}
	

}
