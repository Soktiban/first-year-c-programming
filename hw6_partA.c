#include<stdio.h>
#include<stdlib.h>

main()
{
	int i;
	for (i = 5; i < 60; i++) {
		if (i % 5 == 0)
		{
			printf("\n%i", i);
		}
	}
		system("pause");
}