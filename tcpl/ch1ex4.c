#include <stdio.h>

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; /* lower limit of temp table */
	upper = 300; /* upper limit */
	step = 20; /* step size */
        
	fahr = lower;
	printf("Table: Celsius to Fahrenheit\n");
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", celsius, fahr);
		fahr = fahr + step;
	}
}


/*
pi@RaspPi4:~/Coding/C_folder $ ./ch1ex4 
Table: Celsius to Fahrenheit
-18    0.0
 -7   20.0
  4   40.0
 16   60.0
 27   80.0
 38  100.0
 49  120.0
 60  140.0
 71  160.0
 82  180.0
 93  200.0
104  220.0
116  240.0
127  260.0
138  280.0
149  300.0
pi@RaspPi4:~/Coding/C_folder $ 
*/
