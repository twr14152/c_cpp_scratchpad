#include <stdio.h>

int main(void)
{
	int x = 4;
	printf("x lives at %p\n", &x);
	int *address_of_x = &x;
	int value_stored = *address_of_x;
	printf("The value of x is %d\n", x);
	printf("The address of x is %p\n", address_of_x);
	printf("The value stored in x is %d\n", *address_of_x);
	printf("To change the value of address_of_x to 100\nIssue *address_of_x = 100\n");
	*address_of_x = 100;
	printf("The value of x is: %d\nThe value of address_of_x is: %d\n", x, *address_of_x);
	return 0;
}
/*
pi@raspberrypi:~/Code_folder/c_folder/HeadFirstC/ch2 $ ./ptr_stuff 
x lives at 0x7ed28454
The value of x is 4
The address of x is 0x7ed28454
The value stored in x is 4
To change the value of address_of_x to 100
Issue *address_of_x = 100
The value of x is: 100
The value of address_of_x is: 100
pi@raspberrypi:~/Code_folder/c_folder/HeadFirstC/ch2 $ 
*/
