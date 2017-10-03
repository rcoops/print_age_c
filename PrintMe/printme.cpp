#include "stdafx.h"
#include "age_commenting.h"

#include <stdio.h>
#include <conio.h>

#pragma warning(disable: 4996)

typedef struct Person {
	char sName[30];
	int iAgeInYears;
	char sReasonForBeingHere[200];
} Person;

int main() {
	Person person;
	Person *pPerson = &person;

	printf("Enter name: ");
	scanf("%30[a-zA-Z ]s\n", pPerson->sName);

	printf("Enter age: ");
	// Has to have the address passed in as it's mutating it
	// (if a value was passed in it could be changed, but the 'age' original variable would remain the same)
	scanf("%d", &pPerson->iAgeInYears);

	printf("Why are you even here?\n");
	scanf("\n%200[a-zA-Z ]s", pPerson->sReasonForBeingHere);

	printf("\n-----------------------------------------\n");
	printf("So %s, you are %d years old and you are here because:\n\"%s\"\n", pPerson->sName, pPerson->iAgeInYears,
	       pPerson->sReasonForBeingHere);

	const char *ageComment = judgeAge(pPerson->iAgeInYears);
	commentOnAgeRepeatedly(10, ageComment);

	_getch();

	return 0;
}
