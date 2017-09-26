// PrintMe.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "printMe.h"

#pragma warning(disable: 4996)

int main()
{
	int x = _getch();
	int i = 5;
	char name[30];
	int age;
	printf("Enter name: ");
	scanf("%s", name);
	printf("\nYour name is: %s", name);
	printf("Enter age: ");
	scanf("%d", age);
	printf("%c\n", x);
	printf("Number: %d, Character: %c\n", x, x);
	_getch();
    return 0;
}

