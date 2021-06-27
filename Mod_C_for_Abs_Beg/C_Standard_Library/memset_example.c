#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int *p = malloc(5 * sizeof(int));
	if (p)
	{
		memset(p, 0, 5 * sizeof(int));
		for (int i = 0; i < 5; i++)
		{
			printf("%d ", p[i]);
		}
		free(p);
	}
	puts("");
}
/*
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./memset_example 
0 0 0 0 0 
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ 
*/
