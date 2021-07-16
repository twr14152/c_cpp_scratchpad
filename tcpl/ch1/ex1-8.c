#include <stdio.h>

int main(void)
{
	int c, blanks, nl, tabs;
	blanks = 0;
	nl = 0;
	tabs = 0;

	while(1)
	{	
		c = getchar();
			if (c =='\n')
				++nl;
			if (c =='\t')
				++tabs;
			if (c == ' ')
				++blanks;
			if (c == 'q')
				break;
	}
	printf("Blanks = %d\nnl = %d\ntabs = %d\n", blanks, nl, tabs);
}
/*			
pi@RaspPi4:~/Coding/C_folder/TCPL/ch1 $ ./ex1-8
1
2
3
 
	
7
q
Blanks = 1
nl = 6
tabs = 1
pi@RaspPi4:~/Coding/C_folder/TCPL/ch1 $ 
*/
