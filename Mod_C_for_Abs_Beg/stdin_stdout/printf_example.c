//Prints various types of data to stdout
//
#include <stdio.h>

int main(void)
{
	char c = 'A';
	int x = 123;
	float f = 456.789;
	double d = 101112.131415;
	printf("The values are: %c, %d, %f, %lf\n", c, x, f, d);
}

/*
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./printf_example  
The values are: A, 123, 456.789001, 101112.131415
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ 
*/
