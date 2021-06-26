//This is another means of handling string data
//One difference is you need to add newlines character
//And you need to specify the target output stream
//
#include <stdio.h>

int main(void)
{
	fputs("fputs() prints string the same as puts()\n", stdout);
	fputs("You need to add newline char\n", stdout);
	fputs("You need to specify which output stream to send data to\n", stdout);

}


/*
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./fputs_example 
fputs() prints string the same as puts()
You need to add newline char
You need to specify which output stream to send data to
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ 
*/
