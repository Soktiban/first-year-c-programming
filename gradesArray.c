#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

main() {
	
	int grade[3], sum = 0;
	double average;

	for (int i; i < SIZE; i++)
	{
		printf("enter grade:\n");
		scanf_s("%i", &grade[i]);
		printf("you enterd %i\n", grade[i]);
		sum += grade[i];



	}

	average = (double)sum / SIZE;
	printf("average is %.2lf\n", average);

	system("pause");
}
