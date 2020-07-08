#include <stdio.h>

int main() 
{
	int grade1, grade2, grade3;
	printf("Enter your first grade: ");
	scanf("%d", &grade1);
	printf("Enter your second grade: ");
	scanf("%d", &grade2);
	printf("Enter your third grade: ");
	scanf("%d", &grade3);
	double overallGrade = ((double)grade1 + grade2 + grade3)/3;
	printf("Your grade is: %.2lf\n", overallGrade);
	if (overallGrade >= 70.0) {
		printf("Congrats you pass!\n");
	} else {
		printf("You failed.\n");
	}
	return 0;
}
