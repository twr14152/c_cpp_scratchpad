#include <stdio.h>

union ExUnion
{
	char c;
	int x;
	double d;
};

int main(void)
{
	union ExUnion u;
	u.c = 'T';
	printf("The union's char member value: %c\n", u.c);
	u.x = 123;
	printf("The union's int member value: %d\n", u.x);
	u.d = 456.789;
	printf("The union's double member value: %f\n", u.d);
	
	printf("Unions use same memory space for all members.\n");
	printf("Only last member is active in that memory space.\n");
	printf("%c, %d, %f\n", u.c, u.x, u.d);
}

/*
The union's char member value: T
The union's int member value: 123
The union's double member value: 456.789000
Unions use same memory space for all members.
Only last member is active in that memory space.
\u00b4, -1099511628, 456.789000

*/
