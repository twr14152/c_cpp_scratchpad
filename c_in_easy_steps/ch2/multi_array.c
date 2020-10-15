#include <stdio.h>

int main() 
{
	// [# of arrays][# of elements]
	int matrix[2][3] = {{'A', 'B', 'C'}, {1,2,3}};
	printf("Element[0][0] contains %c \n", matrix[0][0]);
	printf("Element[0][1] contains %c \n", matrix[0][1]);
	printf("Element[0][2] contains %c \n", matrix[0][2]);
	printf("Element[1][0] contains %d \n", matrix[1][0]);
	printf("Element[1][0] contains %d \n", matrix[1][1]);
	printf("Element[1][2] contains %d \n", matrix[1][2]);
	return 0;

}

/*
$ ./multi_array 
Element[0][0] contains A 
Element[0][1] contains B 
Element[0][2] contains C 
Element[1][0] contains 1 
Element[1][0] contains 2 
Element[1][2] contains 3 
$ 
*/
