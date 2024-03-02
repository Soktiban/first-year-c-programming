#include <stdio.h>
#include <stdlib.h>
main() {

	int userNumber = 0, sum = 0, count = 0, highNumber = 0, lowNumber = 0, lastNumber = 0;
	double average;


	printf("Enter a number greater than 0: (Enter -1 to stop) \n");
	scanf_s("%i", &userNumber);
	highNumber = userNumber;
    	lowNumber = userNumber;
 

	while (userNumber != -1) {
		if (userNumber > lowNumber && userNumber > highNumber)
			highNumber = userNumber;
		else if (userNumber < lowNumber)
			lowNumber = userNumber;
		count = count + 1;
		sum = sum + userNumber;
		
		printf("Enter a number:(-1 to stop)\n");
		scanf_s("%i", &userNumber);
	}
	average = (double)sum / count;
	

	
	printf(" The sum is: %i\n", sum);
	printf(" %i numbers were input\n", count);
	printf(" The average is %.2lf\n", average);
	printf("The highest number entered was: %i\n", highNumber);
	printf("The last number entered was: %i\n", lastNumber);
	printf("The lowest number entered was: %i\n", lowNumber);
	system("pause");
}
