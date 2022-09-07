#include <stdio.h>


char char_array[] = "abc123";
char reverse_array[7];


int main()
{
	
	int i = 0;
	int n = 0;
	printf("char_array : %s\n", char_array);
	for (i = 5; i >= 0; i--) {
		reverse_array[n] =  char_array[i];
		n++;
	}
	//printf("%s\n", reverse_array);
	for (i = 0; i <= 6; i++) {
		char_array[i] = reverse_array[i];
	}
	printf("char_array : %s\n", char_array);
	return 0;
}


/*
output:
char_array : abc123
char_array : 321cba
*/
