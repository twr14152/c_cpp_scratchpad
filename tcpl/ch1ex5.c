/*
Rule - as with while loops the for loop body can be a single statement
or multiple statements enclosed in braces {}.
*/

#include <stdio.h>

int main()
{
        float fahr, celsius;
        int lower, upper, step;

        lower = 0; /* lower limit of temp table */
        upper = 300; /* upper limit */
        step = 20; /* step size */
                                                        
       
        printf("Table: Fahrenheit to Celsius\n");
        for (fahr = upper; fahr >= 0; fahr -= 20)
        {
                celsius = (5.0 / 9.0) * (fahr - 32.0);
                printf("%3.0f %6.1f\n", fahr, celsius);
        }
        return 0;
}
/*
pi@RaspPi4:~/Coding/C_folder $ ./ch1ex5 
Table: Fahrenheit to Celsius
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
pi@RaspPi4:~/Coding/C_folder $
*/
