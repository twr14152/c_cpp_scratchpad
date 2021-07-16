#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
	puts("Celsius - Fahrenheit table");
	float fahr, celsius;
	for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		//printf("%3.0f %6.1f\n", fahr, celsius);
		printf("%6.1f %3.0f\n", celsius, fahr);
	}
}
/*
pi@RaspPi4:~/Coding/C_folder/TCPL/ch1 $ gcc -std=c17 ex1-4.c -o ex1-4
pi@RaspPi4:~/Coding/C_folder/TCPL/ch1 $ ./ex1-4 
Celsius - Fahrenheit table
 148.9 300
 137.8 280
 126.7 260
 115.6 240
 104.4 220
  93.3 200
  82.2 180
  71.1 160
  60.0 140
  48.9 120
  37.8 100
  26.7  80
  15.6  60
   4.4  40
  -6.7  20
 -17.8   0
pi@RaspPi4:~/Coding/C_folder/TCPL/ch1 $ 
*/
