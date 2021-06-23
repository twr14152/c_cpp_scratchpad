#include <stdio.h>

int main(void)
{
	char fname[23];
	char lname[23];
	int age;
	float height;

	printf("Whats your first name?\n");
	scanf("%23s", fname); //buffer overruns possible with scanf
	printf("Whats your lastname?\n");
	scanf("%23s", lname); //arrays do not require &
	printf("Whats your age?:");
	scanf("%d", &age);
	printf("How tall are you?: ");
	scanf("%f", &height);
	printf("\n");
	printf("Your name is %s %s and you are %d years old and are %.2f tall\n", fname, lname, age, height);
	
}
/*
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./scanf_example 
Whats your first name?
Layne
Whats your lastname?
Staley
Whats your age?:34
How tall are you?: 5.11

Your name is Layne Staley and you are 34 years old and are 5.11 tall
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ 
*/
