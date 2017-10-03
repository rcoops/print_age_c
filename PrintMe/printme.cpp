// PrintMe.cpp : Defines the entry point for the console application.

#include "stdafx.h"

#include <stdio.h>
#include <tchar.h>
#include <conio.h>

#pragma warning(disable: 4996)

#define TOO_OLD 23
#define TOO_YOUNG 17

struct Person {
	char name[30];
	int age_years;
	char reason_for_being_here[200];
};

typedef struct {
	char name[30];
	int age_years;
	char reason_for_being_here[200];
} person;

void commentOnAgeWayTooMuch(const int iNoOfIterations, const char *sToPrint);
const char * comment_on_age(const int age);

int main() {
	Person person;

	printf("Enter name: ");
	scanf("%30[a-zA-Z ]s\n", person.name);

	printf("Enter age: ");
	// Has to have the address passed in as it's mutating it
	// (if a value was passed in it could be changed, but the 'age' original variable would remain the same)
	scanf("%d", &person.age_years);

	printf("Why are you even here?\n");
	scanf("\n%200[a-zA-Z ]s", person.reason_for_being_here);

	printf("\n-----------------------------------------\n");
	printf("So %s, you are %d years old and you are here because:\n\"%s\"\n", person.name, person.age_years,
	       person.reason_for_being_here);

	commentOnAgeWayTooMuch(10, comment_on_age(person.age_years));
	_getch();

	return 0;
}

void commentOnAgeWayTooMuch(const int iNoOfIterations, const char *sToPrint) {
	printf("\n-----------------------------------------\n");
	for (int i = 0; i < iNoOfIterations; i++) {
		printf("%d: %s\n", i+1, sToPrint);
	}
}

// value is fine
const char * comment_on_age(const int age) {
	if (age >= TOO_OLD) {
		return "Wow, you're old! Shouldn't you have a proper job?";
	}
	if (age <= TOO_YOUNG) {
		return "Umm, shouldn't you finish school first?";
	}
	return "Wow, you're cool! Can I be your friend?";
}
