#include <stdio.h>

int main(void)
{
	int c;
	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}
/*
pi@RaspPi4:~/Coding/C_folder/TCPL/ch1 $ ./ex1-5-1 
t
t
e
e
s
s
t
t
^C
pi@RaspPi4:~/Coding/C_folder/TCPL/ch1 $ 
*/
