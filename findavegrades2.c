#include <stdio.h>
#include <stdlib.h>

main() 
{
	double t1 = 0, t2 = 0, t3 = 0, t4 = 0;
	double average = 0, A = 90, B = 80, C = 70, D = 60, F = 50;
	printf("Enter the four test scores here \n"); 
	scanf_s("%lf %lf %lf %lf ", &t1, &t2, &t3, &t4); 
	average = (t1 + t2 + t3 + t4 / 4);
	printf("The average grade is %.2lf \n", average); 
	if (average >= A)
		printf("The letter grade is A \n");
	else if (average >=B)
		printf("The letter grade is B \n");
	else if (average >=C)
		printf("The letter grade is C \n");
	else if (average >=D)
		printf("The letter grade is D \n");
	else
		printf("The letter grade is F \n");

	system("pause");
}