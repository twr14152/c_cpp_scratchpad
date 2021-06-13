// pointer assignment and reassignment 
//
#include <stdio.h>

int main(void)
{
	int var1 = 1;
	int var2 = 2;
	int *ptr;

	printf("var1 = %d\n", var1);
	printf("var2 = %d\n", var2);
	ptr = &var1;
	printf("ptr = %d\n", *ptr);
	ptr = &var2;
	printf("ptr = %d\n", *ptr);
}

/*
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./ptr_reassign 
var1 = 1
var2 = 2
ptr = 1
ptr = 2
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ 
*/

