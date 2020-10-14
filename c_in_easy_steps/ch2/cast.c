// Cast from float to int get truncated. From double to float get rounded.
#include <stdio.h>

int main()
{
	int x = 66;
	char y = 'B';
	float decimal = 6.78;
	int num = 1;

	printf("cast %d\n", x);
	printf("x equals %c\n",(char)x);
	printf("cast %c\n", y);
	printf("y equals %d\n", (int)y);
	printf("\n");
	printf("Float %f\n", decimal);
	printf("Converted into int %d\n", (int)decimal);
	printf("Int %d\n", num);
	printf("Converted into float %f\n",(float)num);
	return 0;
}
/*
$ ./cast 
cast 66
x equals B
cast B
y equals 66

Float 6.780000
Converted into int 6
Int 1
Converted into float 1.000000
$
*/
