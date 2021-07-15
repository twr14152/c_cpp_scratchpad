#include <stdio.h>

int main()
{
	puts("Fahrenheit - Celsius table");
	float fahr, celsius;
	for (fahr = 300; fahr >= 0; fahr -= 20) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
	}
}
/*
pi@RaspPi4:~/Coding/C_folder/TCPL/ch1 $ ./ex1-3
Fahrenheit - Celsius table
300  148.9
280  137.8
260  126.7
240  115.6
220  104.4
200   93.3
180   82.2
160   71.1
140   60.0
120   48.9
100   37.8
 80   26.7
 60   15.6
 40    4.4
 20   -6.7
  0  -17.8
pi@RaspPi4:~/Coding/C_folder/TCPL/ch1 $ 
*/
