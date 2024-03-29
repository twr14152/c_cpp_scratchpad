#include <stdio.h>

int main(void)
{
	//int is used with getchar() so it can hold any and all chars + the value for EOF
	//EOF is an int value defined in stdio.h
	int c;
	//getchar() reads one character at a time
	c = getchar();
	while (c != EOF) {
		//putchar() writes one character at a time
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
