#include <stdio.h>

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	//int* p = arr;
	int *p = arr;
	printf("The pointed to value is: %d.\n", *p);
	p++;
	printf("The pointed to value is: %d.\n", *p);
	p+=2;
	printf("The pointed to value is: %d.\n", *p);
}


/*
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./ptr_arithmetic 
The pointed to value is: 1.
The pointed to value is: 2.
The pointed to value is: 4.
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ 
*/
