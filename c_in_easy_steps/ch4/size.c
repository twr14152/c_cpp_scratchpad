#include <stdio.h>

int main()
{
	int num = 1234567890;
	printf("Size of int data type is %d bytes\n", sizeof(int));
	printf("Size of int variable is %d bytes\n", sizeof(num));
	printf("Size of int array int[3] is %d bytes\n", sizeof(int[3]));

	struct{ int score; char grade; } result;
	printf("Size of a structure is %d bytes\n", sizeof(result)); 
	// literal value of struct is = 4 + 1 = 5,
	// but 1 is changed to 4 so value is 8
	return 0;
}
	
/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch4 $ ./size
Size of int data type is 4 bytes
Size of int variable is 4 bytes
Size of int array int[3] is 12 bytes
Size of a structure is 8 bytes

*/
