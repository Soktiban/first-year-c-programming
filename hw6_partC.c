#include <stdio.h>
#include <stdlib.h>
main()
{
	int number = 8, count = 0, multiple = 0, sum = 0;

	while (multiple < 500) {
		multiple = number * count;
		count = ++count;
		if (multiple > 100) {
			printf("Your multiple is: %i \n", multiple);
			
			

			sum = multiple * count;
			count = ++count;
			printf("Your sum of the multiples are: %i \n", sum);
			
			
			system("pause");
		}
	}
}

____________________________________________________________________________________________________________________________________

#include <stdio.h>
#include <stdlib.h>
main()
{
	int number = 8, count = 0, multiple = 0, sum = 0;

	while (multiple < 500) {
		multiple = number * count;
		count = ++count;
		if (multiple > 100) {
			printf("Your multiple is: %i \n", multiple);

			
			sum = multiple + count;
			count = ++count;
			printf("Your sum of the multiples are: %i \n", sum);
			
	system("pause");
		}
	}
}