#include "std_lib_facilities.h"

int square(int n) {
	return n*n;
}

int main()
{
	int i = 0;
	while (i<100) {
		cout << "starting number: " << i << '\t' << "square: " << square(i) << '\t' << "sqrt: " << sqrt(i) << '\n'; 
		++i;
	}
}


/*
pi@RaspPi4:~/Coding/CPP_folder/PPPuCPP $ ./ch4_square_sqrt 
starting number: 0	square: 0	sqrt: 0
starting number: 1	square: 1	sqrt: 1
starting number: 2	square: 4	sqrt: 1.41421
starting number: 3	square: 9	sqrt: 1.73205
starting number: 4	square: 16	sqrt: 2
starting number: 5	square: 25	sqrt: 2.23607
starting number: 6	square: 36	sqrt: 2.44949
starting number: 7	square: 49	sqrt: 2.64575
starting number: 8	square: 64	sqrt: 2.82843
starting number: 9	square: 81	sqrt: 3
starting number: 10	square: 100	sqrt: 3.16228

<cropped>
*/
