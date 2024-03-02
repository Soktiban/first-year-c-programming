
#include <stdio.h>
#include <stdlib.h>
n
main() {
	
	int choice = 0, sum = 0, q = 0, num = 0, small, large;
	double avg = 0;
	
	printf("Please enter a number.\n");
	scanf_s("%i", &q);

	small = q;
	large = q;
	while (num < 4)
	{
		num++; 
		sum = sum + q;

		if (small > q)
			small = q;

		else if (large < q)
			large = q;

		else
			q = q;

		printf("Please enter another number.\n");
		scanf_s("%i", &q);
	}
		sum = sum + q;


	if (small > q)
		small = q;

	else if (large < q)
		large = q;

	else
		q = q;

	while (choice != 5)
	{
		{

		}
		printf("Please choose an option.\n");
		printf("press 1 to View smallest number.\n");
		printf("press 2 to View largest number.\n");
		printf("press 3 to View the sum.\n");
		printf("press 4 to View the average.\n");
		printf(" press 5 to Quit program\n");
		scanf_s("%i", &choice);
		switch (choice)
		{
		case 1:
			printf("%i\n\n", small);
			break;

		case 2:
			printf("%i\n\n", large);
			break;

		case 3:
			printf("%i\n\n", sum);
			break;

		case 4:
			avg = (double)sum / 5;
			printf("%.2lf\n\n", avg);
			break;

		case 5:
			printf("END OF SWITCH PROGRAM.\n");
			break;

		default:
			printf("INVALID NUMBER!!!.\n\n");
			break;
		}
	}
	
	system("pause");
}



