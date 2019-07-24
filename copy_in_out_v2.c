#include <stdio.h>

// Copy input to output v2

main()
{
	int c;
	printf("*** Beginning of script ***\n");
	while ((c = getchar()) != EOF)
		putchar(c);
	printf("*** End of script ***\n");
}
