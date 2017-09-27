// PrintMe.cpp : Defines the entry point for the console application.

#include "stdafx.h"

int main()
{
	char name[30];
	char reasonForBeingHere[200];
	int age;
	printf("Enter name: ");
	scanf("%s", name);
	printf("\nEnter age: ");
	scanf("%d", &age);
	printf("\nWhy are you even here?\n");
	scanf("%200[a-zA-Z0-9 ]", reasonForBeingHere);
	printf("\nSo %s, your age is: %d and you are here because:\n\"%s\"\n", name, age, reasonForBeingHere);
	_getch();
    return 0;
}

