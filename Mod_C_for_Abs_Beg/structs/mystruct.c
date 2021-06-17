#include <stdio.h>

struct MyStruct
{
	char c;
	int x;
	double d;
};

void printStruct(struct MyStruct *myparams)
{
	printf("Member c value is %c\n", myparams->c);
	printf("Member x value is %d\n", myparams->x);
	printf("Member d value is %f\n", myparams->d);
}
int main(void)
{
	struct MyStruct s = {'t', 987, 654.321};
	printStruct(&s);
}



/*
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./mystruct 
Member c value is t
Member x value is 987
Member d value is 654.321000
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ 
*/
