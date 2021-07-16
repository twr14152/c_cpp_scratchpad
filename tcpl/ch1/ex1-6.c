#include <stdio.h>

int main(void)
{
	int c;
	while (c = getchar() != EOF)
		printf("%d\n", c);
	printf("%d is EOF\n", c);
}

