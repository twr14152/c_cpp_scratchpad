#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* p = malloc(sizeof(int));
	if (p == NULL)
	{
		printf("Error allocating the memory. Exiting. ");
		return -1;
	}
	*p = 123;
	printf("The value of p is: %d\n", *p);
	free(p);
	p = NULL;
	if (p == NULL)
	{
		printf("The value of p is: NULL.\n");
	}
}

/*
toddriemenschneider@Todds-MBP-2 ModC4AbsBeg % ./memory_allocation    
The value of p is: 123
The value of p is: NULL.
toddriemenschneider@Todds-MBP-2 ModC4AbsBeg % 
*/
