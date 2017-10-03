#include "stdafx.h"
#include "age_commenting.h"

#define TOO_OLD 23
#define TOO_YOUNG 17

void commentOnAgeRepeatedly(const int iNoOfIterations, const char *sToPrint) {
	printf("\n-----------------------------------------\n");

	for (int i = 0; i < iNoOfIterations; i++) {
		printf("%d: %s\n", i + 1, sToPrint);
	}
}

// value is fine
const char* judgeAge(const int age) {
	char *pAgeComment = NULL;

	if (age >= TOO_OLD) {
		pAgeComment = "Wow, you're old! Shouldn't you have a proper job?";
	} else if (age <= TOO_YOUNG) {
		pAgeComment = "Umm, shouldn't you finish school first?";
	} else {
		pAgeComment = "Wow, you're cool! Can I be your friend?";
	}

	return pAgeComment;
}
