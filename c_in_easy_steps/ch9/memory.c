#include <stdio.h>
#include <stdlib.h>

int malloc_usable_size(int *bytes);

int main()
{
	int size, *mem;
	mem = malloc(100 * sizeof(int));
	if (mem != NULL)
	{
		size = malloc_usable_size(mem);
		printf("\nSize of block for 100 ints: %d bytes\n", size);
		printf("Beginning at %p\n", mem);
	}
	else
	{
		printf("!!! Insufficient memory\n");
		return 1;
	}
	mem = realloc( mem, size + (100 * sizeof(int)));
	if(mem != NULL)
	{
		size = malloc_usable_size(mem);
		printf("\nSize of block for 200 ints: %d bytes\n", size);
		printf("Beginning at %p\n", mem);
	}
	else
	{
		printf("!!! Insufficient memory\n");
		return 1;
	}
	free(mem);
	return 0;
}
/*

pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch9 $ ./memory 

Size of block for 100 ints: 404 bytes
Beginning at 0x18c5150

Size of block for 200 ints: 804 bytes
Beginning at 0x18c56f0
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch9 $ ./memory 

Size of block for 100 ints: 404 bytes
Beginning at 0x1cd1150

Size of block for 200 ints: 804 bytes
Beginning at 0x1cd16f0
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch9 $ 
*/
