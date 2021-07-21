#include <stdio.h>

int power(int base, int n);

int main(void) {
	int i;

	for (i=0; i <= 10; ++i) { 
		printf("%d %d %d\n", i, power(2, i), power(4, i));
	}
	return 0;
}

int power(int base, int n) {
	int i, p;
	p = 1;
	for (i=1; i <= n; ++i) {
		p = p * base;
	}
	return p;
}
	
/*
pi@RaspPi4:~/Coding/C_folder/TCPL/misc $ ./power_of_x 
0 1 1
1 2 4
2 4 16
3 8 64
4 16 256
5 32 1024
6 64 4096
7 128 16384
8 256 65536
9 512 262144
10 1024 1048576
pi@RaspPi4:~/Coding/C_folder/TCPL/misc $ 
*/
