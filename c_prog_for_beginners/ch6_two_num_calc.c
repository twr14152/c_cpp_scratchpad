#include <stdio.h>

int main()
{
	int num1, num2;
	char ov;
	
	printf("Enter math operator ('+'), ('-'), ('*'), ('/'), ('%'): ");
	scanf("%c", &ov);
	printf("This is a two number calculator\n");
	printf("Enter number 1: ");
	scanf("%d", &num1);
	printf("Enter number 2: ");
	scanf("%d", &num2);

	switch(ov)
	{
	case '+':
		printf("%d %c %d = %d\n", num1, ov, num2, num1 + num2);
		break;
	case '-':
		printf("%d %c %d = %d\n", num1, ov, num2, num1 - num2);
		break;
	case '*':
		printf("%d %c %d = %d\n", num1, ov, num2, num1 * num2);
		break;
	case '/':
		if (num1 == 0 || num2 == 0)
			printf("Cannot use 0 in division\n\n\n");
		else 
			printf("%d %c %d = %d\n", num1, ov, num2, num1/num2);
		break;
	case '%':
		if (num1 == 0 || num2 == 0)
			printf("Cannot use 0 in division\n\n\n");
		else 
			printf("%d %c %d = %d\n", num1, ov, num2, num1%num2);
		break;
	default:
		printf("You entered something outside of parameters, ERROR\n\n\n");
	}
	return 0;
}


