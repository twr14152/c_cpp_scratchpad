#include <stdio.h>
#include "utils.h"

void getnum();


int main()
{
	getnum();
	return 0;
}

void getnum()
{
	int num;
	char again;
	printf("Enter an integer to be squared: ");
	scanf("%d", &num);
	printf("%d squared is %d\n", num, square(num));
	printf("Square another number? Y or N: ");
	scanf("%1s", &again);
	if (( again == 'Y') || (again == 'y')) getnum();
	else 
		return;
}

/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch6 $ ./square 
Enter an integer to be squared: 5
5 squared is 25
Square another number? Y or N: y
Enter an integer to be squared: 10
10 squared is 100
Square another number? Y or N: n
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch6 $ 
*/
