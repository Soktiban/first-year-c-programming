
#include<stdio.h>
#include<stdlib.h>

main() {

	double score, sum = 0, grade = 0, gradeNum = 0, avg = 0, pass = 0, totalGrades = 0;
	
	while (grade != -1) {

		printf("Enter a test score(-1 to quit):");
		scanf_s("%.2lf", &grade);
		
		
		if (grade <= 100 && grade >= 70) {

			pass++;
			printf("Pass: %lf\n", pass);
		}
		if (grade >= 100) {
			printf("Error, grade is not in grade range\n");
		}
		if (grade >= 0 && grade <= 100) {
			totalGrades++;
		}

	}
	avg = (pass / totalGrades)*100;
	printf("\nThe avg of the scores is : %.2lf\n", avg);
	system("pause");

}