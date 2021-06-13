//Two ways to declare pointers
//*int ptr = &var || int *ptr = &var
//Both work


#include <stdio.h>

int main(void)
{
	int age = 47;
	printf("My age right now is %d\n", age);
	int* next_year = &age;
	*next_year = age + 1;
	printf("My age next year will be %d\n", *next_year);
	int *two_years = &age;
	*two_years = *next_year + 1;
	printf("My age in two years will be %d\n", *two_years);
}

/*
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./ptrs 
My age right now is 47
My age next year will be 48
My age in two years will be 49
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $   

*/
