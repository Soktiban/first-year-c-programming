#include <stdio.h>
#include <stdlib.h>
main()


{

	int counter = 0;

	while (counter <= 200) {
		if (counter % 2 == 0 && counter % 7 == 0)

			printf("\n%i", counter);
		counter++;

	}
	system("pause");
}

