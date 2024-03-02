#include <stdio.h>
#include <stdlib.h>
#define NUMBERS 50
//main function
main() {
	int number[NUMBERS];
	int i;

	number [0]=50;

	printf("enter numbers   %i\n", number[NUMBERS]);
	scanf_s("%i", &number[NUMBERS]);
	for (i = 0; i < NUMBERS; i++) {
		printf("element %i has %i\n", i, number[i]);
		}

	system("pause");
}
