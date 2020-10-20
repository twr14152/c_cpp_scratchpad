#include <stdio.h>

int main()
{
	for (int i = 1; i < 4; i++)
	{
		printf("Outer loop %d\n", i);
		for (int j = 1; j < 4; j++)
		{
			printf("\tInner loop %d\n", j);
		}
	}

	return 0;
}

/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch5 $ ./forloop 
Outer loop 1
	Inner loop 1
	Inner loop 2
	Inner loop 3
Outer loop 2
	Inner loop 1
	Inner loop 2
	Inner loop 3
Outer loop 3
	Inner loop 1
	Inner loop 2
	Inner loop 3
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch5 $ 
*/
