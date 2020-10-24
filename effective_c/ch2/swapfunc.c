#include <stdio.h>

void swap(int *val1, int *val2) {
	int t = *val1;
	*val1 = *val2;
	*val2 = t;
}

int main(void) {
	int a = 1;
	int b = 2;
	printf("Original value a = %d , b = %d\n", a, b);
	swap(&a, &b);
	printf("After swap() value a = %d, b = %d\n", a, b);
	return 0;
}

/*
pi@RaspPi4:~/Coding/C_folder/effective_c/ch2 $ ./swapfunc 
Original value a = 1 , b = 2
After swap() value a = 2, b = 1
pi@RaspPi4:~/Coding/C_folder/effective_c/ch2 $ 
*/
