// Ptr to string constants vs using const char array
// Read arrays are the preferred method as its type is a more direct use of the data and type


#include <stdio.h>

int main(void)
{
	puts("While you can use ptr to sting constants");
	const char *p = "Testing ptrs to str constants";
	printf("Output: %s\n", p);
	puts("The recommended method is using an array");
	const char arr[] = "This is more efficient";
	printf("Output: ");
	puts(arr);


}
/*
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./ptr_to_str_const
While you can use ptr to sting constants
Output: Testing ptrs to str constants
The recommended method is using an array
Output: This is more efficient
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ 
*/
