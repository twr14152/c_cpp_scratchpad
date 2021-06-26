// Putchar() prints a character at a time
// Use loop to print multiple chars
//

#include <stdio.h>

int main(void)
{
	char c = 'A';
	puts("putchar() by itself prints a char one at a time");
	putchar(c);
	puts("");
	puts("Use a loop to print muliple chars with putchar()");
	char msg[] = "This is a test message";
	for (int i = 0; i < sizeof(msg); i++)
	{
		putchar(msg[i]);
	}
	puts("");
}
/*
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./putchar_example
putchar() by itself prints a char one at a time
A
Use a loop to print muliple chars with putchar()
This is a test message
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ 
*/
