//(test-exp)? if-true-do-this : if-false-do-this

#include <stdio.h>

int main(void) 
{
	(10 / 2 == 5) ? printf("correct\n") : printf("false\n");
	return 0;
}


/*
./ternary
correct
*/
