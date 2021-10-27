#include <stdio.h>

int main()
{
	int c;
        /* The precedence of != is higher than = so () are necessary */
	 while ((c = getchar()) != EOF) {
		 putchar(c);

	 }
	return 0;
}


/*
./main < test
This is a test of char 0 and 1.
To make sure they are not EOF values.
*/
