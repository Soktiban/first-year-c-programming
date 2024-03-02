#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void myFuntion(int a)
{
	
	printf("this is my function\n");
}
main()
{
	int a;
	
	myFunction(5);

	int shape1, shape2;
	int square(int a);

	{
		printf("this is square\n");
		shape1 = askSquare();
		shape2 = askCube();
	}
		int cube(int a);
		printf("this is cube\n");
		shape1 = askSquare();
		shape2 = askCube();

}

int askNum()
{
	int x;
	printf("enter a number\n");
	scanf_s("%i", &x);
	return x;

}

int addNum(int a, int b){
	int sum;
	sum = a + b;
	return sum;
}
void display(int a)
{
	printf("the result is %i\n", a);





	int num1, num2, num3, prod;
	
	num1 = askNum();
	num2 = askNum();
	addNum(num1, num2);
	num3 = addNum(num1, num2);
	

	system("pause");
}

