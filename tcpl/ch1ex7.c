/* Print the value of EOF */

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
	/* The print statement below is the answer to the exercise */
	printf("The value of EOF is %d\n", EOF);
	return 0;
}

/*
pi@RaspPi4:~/Coding/C_folder $ ./ch1ex7 < testfile 

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
1 - f
1 - o
1 - r
1 -  
1 - c
1 - h
1 - 1
1 - e
1 - x
1 - 7
1 - 
The value of c is 0
The value of EOF is -1
*/
