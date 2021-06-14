#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("The command-line args are:\n");
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}

/*
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./cli_args one two three four five
The command-line args are:
./cli_args
one
two
three
four
five
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ 
*/


