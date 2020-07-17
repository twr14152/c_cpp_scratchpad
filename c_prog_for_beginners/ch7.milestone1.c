#include <stdio.h>

int main()
{
	int grade;
	int totalSum = 0;
	int gradesCount = 0;

	printf("Enter your grades or '-1' to stop: ");
	scanf("%d", &grade);

	while( grade != -1) {
		totalSum = totalSum + grade;
		gradesCount++;
		printf("Enter you grades or '-1' to stop: ");
		scanf("%d", &grade);
	}
	printf("You've entered %d grades. \n", gradesCount);
	printf("Your average grade is %f \n", (float)totalSum/gradesCount);

	return 0;
}
/*
pi@RaspPi4:~/Coding/C_folder/c_prog_for_beginners $ ./ch7.milestone1 
Enter your grades or '-1' to stop: 81
Enter you grades or '-1' to stop: 85
Enter you grades or '-1' to stop: 70
Enter you grades or '-1' to stop: 78
Enter you grades or '-1' to stop: -1
You've entered 4 grades. 
Your average grade is 78.500000 
*/
