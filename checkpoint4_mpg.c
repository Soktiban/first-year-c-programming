#include<stdio.h>>
#include<stdlib.h>
main() {
	double miles, gallons, milesPerGallon;
	double totalMiles = 0.0, totalGallons= 0.0, overallMilesPerGallon;
	
	
	
	printf("Enter the gallons of gas used (-1 to quit):");
	scanf_s("%lf", &gallons);
	
	while (gallons != -1) {
		totalGallons = totalGallons + gallons;
		printf("Enter the miles driven:");
		scanf_s("%lf", &miles);

		milesPerGallon = miles / gallons;
		totalMiles = totalMiles + miles;
		printf("For this tak you got %.2lf miles per gallon.\n", milesPerGallon);
		
		printf("Enter the gallons of gas used (-1 to quit):");
		scanf_s("%lf", &gallons);

	}
	overallMilesPerGallon = totalMiles / totalGallons;
	printf("Your average for these tanks is: %.2lf miles per gallon.\n", overallMilesPerGallon);
	system("pause");
}
