#include <stdio.h>

char *ptr1 = "Green";
char array1[] = "Green";

int main(void)
{
	printf("*ptr1 = %s using sizeof() is %d chars long  and has address %p\n", ptr1, sizeof(ptr1), ptr1);
	printf("array1 = %s using sizeof() is %d chars long and has address  %p\n",array1, sizeof(array1), array1);
	return 0;
}

/*
pi@raspberrypi:~/Code_folder/c_folder/HeadFirstC/ch2.5 $ ./sizeof_values 
*ptr1 = Green using sizeof() is 4 chars long  and has address 0x1055c
array1 = Green using sizeof() is 6 chars long and has address  0x2102c
pi@raspberrypi:~/Code_folder/c_folder/HeadFirstC/ch2.5 $ 
*/
