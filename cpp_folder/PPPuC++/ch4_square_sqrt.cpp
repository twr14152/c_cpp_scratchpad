#include "std_lib_facilities.h"

int square(int n) {
	return n*n;
}

int main()
{
	int i = 0;
	while (i<100) {
		cout << i << '\t' << "square: " << square(i) << '\t' << "sqrt: " << sqrt(i) << '\n'; 
		++i;
	}
}


/*
pi@RaspPi4:~/Coding/CPP_folder/PPPuCPP $ ./ch4_squares 
0	square: 0	sqrt: 0
1	square: 1	sqrt: 1
2	square: 4	sqrt: 1.41421
3	square: 9	sqrt: 1.73205
4	square: 16	sqrt: 2
5	square: 25	sqrt: 2.23607
6	square: 36	sqrt: 2.44949
7	square: 49	sqrt: 2.64575
8	square: 64	sqrt: 2.82843
9	square: 81	sqrt: 3
10	square: 100	sqrt: 3.16228
<cropped>
*/
