#include <stdio.h>

//Copy input to output

main()
{
	int c;
        printf("*** Start of Script ***\n");
	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
	printf("*** End of Script ***\n");
}
	
