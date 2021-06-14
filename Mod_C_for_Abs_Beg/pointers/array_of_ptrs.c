#include <stdio.h>

int main(void)
{
	char *p[] = {"First sentence", "Second sentence", "Third sentence"};
	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", p[i]);
	}
	return 0;
}


/*
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./array_of_ptrs 
First sentence
Second sentence
Third sentence
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ 
*/


