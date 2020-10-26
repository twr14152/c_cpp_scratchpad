#include <stdio.h>

typedef struct
{
	char *name;
	char *popn;
} City;

int main()
{
	City ny,la,ch, *ptr;
	ny.name = "New York City";
	ny.popn = "8,274,527";
	printf("\n%s, Population: %s\n", ny.name, ny.popn);
	ptr = &la;
	ptr->name = "Los Angeles";
	ptr->popn = "3,834,340";
	printf("\n%s, Population: %s\n", la.name, la.popn);
	ptr = &ch;
	ptr->name = "Chicago";
	ptr->popn = "2,836,658";
	printf("\n%s, Population: %s\n", ptr->name, ptr->popn);
	return 0;
}
/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch9 $ ./structPtr 

New York City, Population: 8,274,527

Los Angeles, Population: 3,834,340

Chicago, Population: 2,836,658
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch9 $ 
*/
