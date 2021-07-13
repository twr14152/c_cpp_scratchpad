#include <stdio.h>

void myfunction()
{
	puts("Hello this output is from myfunction func....");
}
int main(void)
{
	void (*fp) ();
	fp = myfunction;
	fp();
}

/*
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./func_ptrs 
Hello this output is from myfunction func....
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ 
*/
