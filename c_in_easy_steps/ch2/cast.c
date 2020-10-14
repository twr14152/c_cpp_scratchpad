#include <stdio.h>

int main()
{
	int x = 66;
	char y = 'B';
	printf("cast %d\n", x);
	printf("x equals %c\n",(char)x);
	printf("cast %c\n", y);
	printf("y equals %d\n", (int)y);
	printf("\n");
	return 0;
}

/*
$ ./cast 
cast 66
x equals B
cast B
y equals 66

$ 
*/
