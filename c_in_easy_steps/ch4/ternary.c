//(test-exp)? if-true-do-this : if-false-do-this

#include <stdio.h>

int main(void) 
{
	(10 / 2 == 5) ? printf("correct\n") : printf("false\n");

	//unexpected output expression result printed first
	printf("using ternary exp in print statement\n", (3 == 4)? printf("true\n"): printf("false\n"));
	return 0;
}

/*
./ternary
correct
false
using ternary exp in print statement
*/
