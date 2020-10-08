#include <stdio.h>

static int sum = 100;

int main()
{
	extern int sum;
	printf("Sum is %d \n", sum);
	extern int num;
	printf("Num is %d \n", num);
	return 0;
}

/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch2 $ gcc global_1.c global_2.c -o global
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch2 $ ./global 
Sum is 100 
Num is 200 
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch2 $
*/
