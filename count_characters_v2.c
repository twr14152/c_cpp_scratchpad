#include <stdio.h>

main()
{
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		; //this is called a null statement
	printf("%.0f\n", nc); 
}
