#include <stdio.h>

void myfunc(char* arg1, int arg2)
{
	printf("%s %d\n", arg1, arg2);
}

int main(void)
{
	void (*fp)(char *, int);
	fp = myfunc;
	fp("The value of the argument is:", 23);
}

/*
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./func_ptrs_w_params 
The value of the argument is: 23
*/
