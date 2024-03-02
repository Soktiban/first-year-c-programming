#include <stdio.h>
#include <stdlib.h>

int askNumFahrenheit() {

	int fahrenheit;
	printf("Enter a temperature in Fahrenheit:\n");
	scanf_s("%i", &fahrenheit);
	return fahrenheit;
}

int convFahrenheit(int a) {

	int newcelsius;
	newcelsius = (a - 32) / 1.8;
	return newcelsius;
} 

void printCelsius(int a) {

	printf("The converted temperature is %i\xf8 Celsius\n", a);

}


int askNumCelsius() {

	int celsius;
	printf("Enter a temperature in Celsius:\n");
	scanf_s("%i", &celsius);
	return celsius;
} 
elsius fun
int convCelsius(int a) {

	int newFahrenheit;
	newFahrenheit = (a * 1.8) + 32;
	return newFahrenheit;

} 

void printFahrenheit(int a) {

	printf("The converted temperature is %i\xf8 fehrenheit\n", a);

}

 
main() {

	int choice = 0, num1, num2;

	while (choice != 3)
		printf("Choose an option:\n1.) Convert Fahrenheit to Celsius.\n2.) Convert Celsius to Fahrenheit.\n3.) Quit the Program\n\n");
		scanf_s("%i", &choice);
		switch (choice)
		{

		case 1:
			num1 = askNumFahrenheit();
			num2 = convFahrenheit(num1);
			printCelsius(num2);
			break;


		case 2:
			num1 = askNumCelsius();
			num2 = convCelsius(num1);
			printFahrenheit(num2);
			break;

		case 3:
			printf("\nend of program--need a Headache medicine-");
			break;
			}
	}
	system("pause");

