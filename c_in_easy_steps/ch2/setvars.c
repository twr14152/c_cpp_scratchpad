#include <stdio.h>

int main() 
{
	char letter;
	int num1, num2;
	printf("Enter any one keyboard characters.\n");
	scanf("%c", &letter);
	printf("Enter two integers seperated by a space.\n");
	scanf("%d %d", &num1, &num2);
        printf("Numbers input:%d and %d \n", num1, num2);
	printf("Letter input: %c", letter);
	printf(" Stored at: %p \n", &letter);
	return 0;
}
/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch2 $ ./setvars 
Enter any one keyboard characters.
t 
Enter two integers seperated by a space.
2 4
Numbers input:2 and 4 
Letter input: t Stored at: 0xbe8e94df 
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch2 $ 
*/
