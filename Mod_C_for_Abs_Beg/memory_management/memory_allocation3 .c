#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char* p = malloc(sizeof(char));
	if (p)
	{
		*p = 'A';
		printf("The value is: %c\n", *p);
	}
	free(p);
}

/*
toddriemenschneider@Todds-MBP-2 ModC4AbsBeg % ./memory_allocation3    
The value is: A
toddriemenschneider@Todds-MBP-2 ModC4AbsBeg % 
*/
