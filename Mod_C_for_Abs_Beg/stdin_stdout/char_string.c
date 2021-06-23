#include <stdio.h>

int main(void)
{
	char fname[23];
	char lname[23];

	printf("Whats your first name?\n");
	scanf("%23s", fname);
	printf("Whats your lastname?\n");
	scanf("%23s", lname);
	printf("Your name is %s %s\n", fname, lname);
}
/*
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./char_string 
Whats your first name?
Clark
Whats your lastname?
Kent
Your name is Clark Kent
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ 
*/
