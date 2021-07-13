#include <stdio.h>

int main(void)
{
	int arr[5] = {1,2,3,4,5};
	int *p = arr;
	printf("The arrays contents are {1,2,3,4,5}\n");
	printf("The first array element displayed by (p) is: %d\n", p);
	printf("The first array element displayed by (*p) is: %d\n", *p);
}

/*
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./ptr_to_array2 
The arrays contents are {1,2,3,4,5}
The first array element displayed by (p) is: -1098239528    // Saw example without *p and wanted to see what would happen
The first array element displayed by (*p) is: 1  // Use *p to display value of whats being pointed to
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ 
*/
