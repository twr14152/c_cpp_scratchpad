//puts() is an easy way to print string data
//
#include <stdio.h>

int main(void)
{
	char str[] = "Sample string";
	puts("Puts() is recommended to print strings");
	puts("That is when string operators arent needed");
	puts("Puts() automatically adds '/nl' character");
	puts("");
	puts(str);
}

/*
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./puts_example 
Puts() is recommended to print strings
That is when string operators arent needed
Puts() automatically adds '/nl' character

Sample string
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ 
*/
