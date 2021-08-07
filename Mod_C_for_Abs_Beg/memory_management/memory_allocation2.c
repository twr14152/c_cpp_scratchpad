#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* p = malloc(5 * sizeof(int));
	if (p)
	{
		p[0] = 10;
		p[1] = 20;
		p[2] = 30;
		p[3] = 40;
		p[4] = 50;
		printf("Allocated an array of 5 integers.\n");
		
		for (int i = 0; i < 5; i++)
		{
			printf("%d ", p[i]);
		}
	}	
	free (p);
	p = NULL;
	puts(" ");
}

/*
toddriemenschneider@Todds-MBP-2 ModC4AbsBeg % ./memory_allocation2    
Allocated an array of 5 integers.
10 20 30 40 50  
toddriemenschneider@Todds-MBP-2 ModC4AbsBeg % 
*/
