// Allocate multiple objects (memory space) and initalize them to all zeros

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* p = calloc(5, sizeof(int));
	if (p)
	{
		printf("Initial values: \n");
		for (int i = 0; i < 5; i++)
		{
			printf("%d ", p[i]);
		}
		printf("\nNew values:\n");
		for (int i = 0; i < 5; i++)
		{
			p[i] = (i + 1) * 10;
			printf("%d ", p[i]);
		}
	}
	free(p);
	puts(" ");
} 
/*
toddriemenschneider@Todds-MBP-2 ModC4AbsBeg % ./calloc_ex1                           
Initial values: 
0 0 0 0 0 
New values:
10 20 30 40 50  
toddriemenschneider@Todds-MBP-2 ModC4AbsBeg % 
*/
