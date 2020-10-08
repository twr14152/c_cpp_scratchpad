#include <stdio.h>

int main() 
{
	int num = 100;
	double pi = 3.1415926536;
	printf("Integer is %d\n", num);
	printf("Values are %d and %f\n", num, pi);
	printf("%%7d displays %7d\n", num);
	printf("%%07d displays %07d\n", num);
	printf("Pi is approximately %1.10f\n", pi);
	printf("Right-aligned %20.3f rounded pi\n", pi);
	printf("Left-aligned %-20.3f rounded pi\n", pi);
	return 0;
}
/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch2 $ ./vars 
Integer is 100
Values are 100 and 3.141593
%7d displays     100
%07d displays 0000100
Pi is approximately 3.1415926536
Right-aligned                3.142 rounded pi
Left-aligned 3.142                rounded pi
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch2 $ 
*/
