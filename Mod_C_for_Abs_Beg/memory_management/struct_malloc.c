#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char c;
	int x;
	double d;
} MyStruct;

int main(void)
{
	MyStruct *p = malloc(sizeof(MyStruct));
	if (p)
	{
		p->c = 'A';
		p->x = 123;
		p->d = 456.789;
	printf("The value is: %c\n", p->c);
	printf("The value is: %d\n", p->x);
	printf("The valie is: %f\n", p->d);
	}
	free(p);
}

/*
toddriemenschneider@Todds-MBP-2 ModC4AbsBeg % gcc -std=c2x struct_malloc.c -o struct_malloc 
toddriemenschneider@Todds-MBP-2 ModC4AbsBeg % ./struct_malloc 
The value is: A
The value is: 123
The valie is: 456.789000
toddriemenschneider@Todds-MBP-2 ModC4AbsBeg % 
*/
