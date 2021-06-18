#include <stdio.h>

typedef struct
{
	char a;
	int x;
	double d;
} example1;

int main(void)
{
	example1 s;
	s.a = 't';
	s.x = 400;
	s.d = 3.14;
	printf("Values of s are %c, %d, %f\n", s.a, s.x, s.d);
}

/* 
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./typedef_struct 
Values of s are t, 400, 3.140000
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ 

*/
