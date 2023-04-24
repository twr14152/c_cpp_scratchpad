#include <stdio.h>
#include <limits.h>
#include <string.h>

int main(void)
{
	char a[] = "This is a test!";
	int length = strlen("This is a test!\n");
	printf("The value given by sizeof(a) is : %d and the value of strlen(a) is : %d\n", sizeof(a), strlen(a));
        printf("The length of This is a test! is %d\n", length);	
	printf("Using C Version: %d\n", __STDC_VERSION__);
	printf("The size of long max is:  %lu\n", ULONG_MAX);
	return 0;
}
/*
pi@RaspPi4:~/Coding/C_folder/TCPL/ch2 $ ./var_type_size 
The value given by sizeof(a) is : 16 and the value of strlen(a) is : 15
The length of This is a test! is 16
Using C Version: 201710
The size of long max is:  4294967295
pi@RaspPi4:~/Coding/C_folder/TCPL/ch2 $ 
*/
