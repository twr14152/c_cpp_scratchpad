#include <stdio.h>

main()
{
	float fahr, celsius;
	int lower, upper, step;
        char f[] = "fahr"; 
        char c[] = "celcius";

	lower = 0;
	upper = 300;
        step = 20;

 	fahr = lower;
	printf("%s\t%s\n", f, c);
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f\t %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
