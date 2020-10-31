#include <stdio.h>
#include <stdlib.h>

int main()
{
	double A[5] = {
		[0] = 9.0,
		[1] = 10.0,
		[2] = 20e3,
		[3] = .005,
		[4] = 2,
	};
	for (size_t i = 0; i < 5; i++)
	{
		printf("Element %zu is %g \tits square is %g\n", i , A[i],A[i]*A[i]);
	}
	return EXIT_SUCCESS;
}
/*
pi@RaspPi4:~/Coding/C_folder/modern_c/ch1 $ ./ex1.1 
Element 0 is 9 	its square is 81
Element 1 is 10 	its square is 100
Element 2 is 20000 	its square is 4e+08
Element 3 is 0.005 	its square is 2.5e-05
Element 4 is 2 	its square is 4
pi@RaspPi4:~/Coding/C_folder/modern_c/ch1 $ 
*/
