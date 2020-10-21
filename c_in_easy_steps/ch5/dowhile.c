#include <stdio.h>

int main()
{
	int i, arr[5] = {10,20,30,40,50};

	i = 0; 
	while (i < 5)
	{
		printf("While loop: arr[%d] = %d\n", i, arr[i]); i++;
	}
	i = 0;
	do 
	{
		printf("\nDo while: arr[%d] = %d", i, arr[i]); i++;
	}
	while(i < 5);
	printf("\n");
	return 0;
}
/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch5 $ ./dowhile 
While loop: arr[0] = 10
While loop: arr[1] = 20
While loop: arr[2] = 30
While loop: arr[3] = 40
While loop: arr[4] = 50

Do while: arr[0] = 10
Do while: arr[1] = 20
Do while: arr[2] = 30
Do while: arr[3] = 40
Do while: arr[4] = 50
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch5 $ 
*/
