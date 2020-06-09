/* Verify the expression getchar() != EOF is 0 or 1 */

#include <stdio.h>

int main()
{
	int c;
        /* The precedence of != is higher than = so () are necessary */
	 while ((c = getchar()) != EOF) {
		 printf("\n%d - ", c != EOF);
		 putchar(c);

	 }
	printf("The value of c is %d\n", c != EOF);
	printf("The value of EOF is %d\n", EOF);
	return 0;
}

/*
pi@RaspPi4:~/Coding/C_folder $ ./ch1ex6 < testfile

1 - T
1 - e
1 - s
1 - t
1 -  
1 - d
1 - a
1 - t
1 - a
1 - 
The value of c is 0
The value of EOF is -1
pi@RaspPi4:~/Coding/C_folder $ 
*/

