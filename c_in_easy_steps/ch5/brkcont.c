#include <stdio.h>

int main()
{
	int i, j;
	for (i = 1; i < 4; i++)
	{
		for (j = 1; j < 4; j++)
		{
		if (i == 1 && j == 1)
		{
			printf("Continues inner loop when i = %d and j = %d\n", i, j);
			continue;
		}
		else if (i == 2 && j == 2)
		{
			printf("Breaks inner loop when i = %d and j = %d\n",i, j);
			break;
		}
		else
		{
			printf("Running i = %d j= %d\n", i, j);
		}
	}
	}
	return 0;	
}

/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch5 $ ./brkcont 
Continues inner loop when i = 1 and j = 1
Running i = 1 j= 2
Running i = 1 j= 3
Running i = 2 j= 1
Breaks inner loop when i = 2 and j = 2
Running i = 3 j= 1
Running i = 3 j= 2
Running i = 3 j= 3
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch5 $ 
*/
