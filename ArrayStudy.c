#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

main() {
	
	int grades[10] = { 87, 65, 98, 45 };
	int i;
	double rainfall[SIZE];
	grades[0] = 100;

	printf("the first element is %i\n", grades[0]);
	
	for (i = 0; i < 10; i++) {
		printf("element %i has %i \n", i, grades[i]);
	}

	for (i = 0; i < SIZE; i++) {

		printf("ENTER A RAINFALL AMOUNT: ");
		scanf_s("%lf", &rainfall[i]);
		printf("rainfall %i has  %.2lf\n", i, rainfall[i]);

}
	system("pause");
}