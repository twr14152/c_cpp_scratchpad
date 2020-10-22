#include <stdio.h>

void menu();
void action(int option);

static int square(int a) { return (a*a);}
static int multiply(int a, int b){ return (a * b);}

void action(int option)
{
	int n1, n2;
	if (option == 1)
	{
		printf("Enter an integer to be squared: ");
		scanf("%d", &n1);
		printf("%d x %d = %d \n", n1, n1, square(n1));
		menu();
	}
	else if (option == 2)
	{
		printf("Enter two integers to multiply");
		printf(" separated by a space: ");
		scanf("%d", &n1);
		scanf("%d", &n2);
		printf("%d x %d = %d\n", n1, n2, multiply(n1, n2));
		menu();
	}
	else
		return;
}

/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch6 $ gcc menu.c action.c -o menu
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch6 $ ./menu

	What would you like to do?
	1.Square a number
	2.Multiply two numbers
	3.Exit
1
Enter an integer to be squared: 9
9 x 9 = 81 

	What would you like to do?
	1.Square a number
	2.Multiply two numbers
	3.Exit
2
Enter two integers to multiply separated by a space: 34 43
34 x 43 = 1462

	What would you like to do?
	1.Square a number
	2.Multiply two numbers
	3.Exit
3
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch6 $ 
*/
