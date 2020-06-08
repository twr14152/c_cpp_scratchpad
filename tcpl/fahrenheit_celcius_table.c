#include <stdio.h>

main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0; /* lower limit of temp table */
	upper = 300; /* upper limit */
	step = 20; /* step size */

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}



/*
pi@RaspPi4:~/Coding/C_folder $ gcc -o f_c_table fahrenheit_celcius_table.c
fahrenheit_celcius_table.c:3:1: warning: return type defaults to 'int' [-Wimplicit-int]
 main()
 ^~~~
pi@RaspPi4:~/Coding/C_folder $ ./f_c_table
0	-17
20	-6
40	4
60	15
80	26
100	37
120	48
140	60
160	71
180	82
200	93
220	104
240	115
260	126
280	137
300	148
pi@RaspPi4:~/Coding/C_folder $
*/
