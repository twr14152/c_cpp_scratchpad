#include <stdio.h>

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; /* lower limit of temp table */
	upper = 300; /* upper limit */
	step = 20; /* step size */

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}



/*
pi@RaspPi4:~/Coding/C_folder $ gcc -o f_c_table fahrenheit_celcius_table_float.c 
fahrenheit_celcius_table_float.c:3:1: warning: return type defaults to 'int' [-Wimplicit-int]
 main()
 ^~~~
pi@RaspPi4:~/Coding/C_folder $ ./f_c_table 
  0  -17.8
 20   -6.7
 40    4.4
 60   15.6
 80   26.7
100   37.8
120   48.9
140   60.0
160   71.1
180   82.2
200   93.3
220  104.4
240  115.6
260  126.7
280  137.8
300  148.9
pi@RaspPi4:~/Coding/C_folder $
*/
