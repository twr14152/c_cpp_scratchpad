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
	printf("\n---Pointer info---\n");
	printf("The value of ptr:%p\n", ptr);
	printf("The value of *ptr:%s\n", *ptr);
	printf("The value of ptr->name:%s\n", ptr->name);
	printf("The value of ptr->popn:%s\n", ptr->popn);
	printf("The address of &ptr:%p\n", &ptr);
	printf("The address of &ch:%p\n", &ch); 
	
	return 0;
}
/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch9 $ ./structPtr 

New York City, Population: 8,274,527

Los Angeles, Population: 3,834,340

Chicago, Population: 2,836,658

---Pointer info---
The value of ptr:0xbe9981f8
The value of *ptr:Chicago
The value of ptr->name:Chicago
The value of ptr->popn:2,836,658
The address of &ptr:0xbe9981f4
The address of &ch:0xbe9981f8
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch9 $ 
*/
