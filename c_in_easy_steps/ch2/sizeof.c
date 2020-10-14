// Default value of int = long int. 
// Good programming practice to use smallest amount of memory where possible.
#include <stdio.h>
#include <limits.h>

int main()
{
	printf("short int... \tsize %d bytes \t", sizeof(short int));
	printf("%d to %d \n", SHRT_MAX, SHRT_MIN);
	printf("The default value of int is:\n");
	printf("int... \tsize %d bytes \t", sizeof(int));
	printf("%d to %d \n", INT_MAX, INT_MIN);
	printf("long int...\tsize: %d bytes \t", sizeof(long int));
	printf("%ld to %ld \n", LONG_MAX, LONG_MIN);
	printf("char... \tsize: %d syte \n", sizeof(char));
	printf("float... \tsize: %d bytes \n", sizeof(float));
	printf("double... \tsize: %d bytes \n", sizeof(double));
	return 0;
}
/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch2 $ ./sizeof 
short int... 	size 2 bytes 	32767 to -32768 
The default value of int is:
int... 	size 4 bytes 	2147483647 to -2147483648 
long int...	size: 4 bytes 	2147483647 to -2147483648 
char... 	size: 1 syte 
float... 	size: 4 bytes 
double... 	size: 8 bytes 
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch2 $ 
*/
