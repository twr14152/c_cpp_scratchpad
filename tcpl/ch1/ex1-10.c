#include <stdio.h>


int main(void)
{
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\t')
			printf("\\t");	
		else if (c == '\b')
			printf("\\b");
		else if (c == '\n')
			printf("\\n");
		else
			putchar(c);


	}
	printf("\n");
	return 0;
}
/*
pi@RaspPi4:~/Coding/C_folder/TCPL/ch1 $ cat test   
tabs			
blanks   
newlines



pi@RaspPi4:~/Coding/C_folder/TCPL/ch1 $ ./ex1-10 < test
tabs\t\t\t\nblanks   \nnewlines\n\n\n\n
pi@RaspPi4:~/Coding/C_folder/TCPL/ch1 $ 
*/
