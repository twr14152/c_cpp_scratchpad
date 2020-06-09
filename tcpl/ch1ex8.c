/* Count # of blanks tabs and newlines */

#include <stdio.h>

int main() 
{
	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n' || c == '\t' || c == ' ')
			++nl;
	printf("%d\n", nl);
}



/*
pi@RaspPi4:~/Coding/C_folder $ ./ch1ex8 < test3.txt 
8
pi@RaspPi4:~/Coding/C_folder $ nl test3.txt 
     1	1
     2	2
     3	3
     4	4
     5	tab	
     6	empty space
pi@RaspPi4:~/Coding/C_folder $
*/
