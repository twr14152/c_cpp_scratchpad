#include <stdio.h>

int main()
{
	double cel, fahr;
	printf("Enter degrees celcius: ");
	scanf("%lf", &cel);
	printf("Enter degrees Fahr: ");
	scanf("%lf", &fahr);
	double ans1 = (cel* 1.8) + 32;
	printf("The temp of %.2lf in celcius is equal to %.2lf in fahr\n", cel, ans1);
	double ans2 = (fahr - 32)/1.8;
	printf("The temp of %.2lf in Fahr is equal to %.2lf in celcius\n", fahr, ans2);
	return 0;
}
