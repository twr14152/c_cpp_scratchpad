// reallocate memory allocated by malloc or calloc
// void *realloc(void *ptr_to_allocated_mem, size_t new_size_in_bytes)

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* p = malloc(sizeof(int));
	if (p)
	{
		printf("Allocated %zu bytes.\n", sizeof(*p));
	}
	printf("Resizing allocated memory..\n");
	int* pnew = realloc(p, 10 * sizeof(int));
	if (pnew)
	{
		printf("The memory block is now %zu bytes long. \n", 10 * sizeof(int));
		free(pnew);
	}
	else
	{
		puts("allocating pnew failed");
		free(p);
	}
}
/*
toddriemenschneider@Todds-MBP-2 ModC4AbsBeg % ./reallocate_ex1                               
Allocated 4 bytes.
Resizing allocated memory..
The memory block is now 40 bytes long. 
toddriemenschneider@Todds-MBP-2 ModC4AbsBeg % 
*/
