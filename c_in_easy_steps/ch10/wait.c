#include <stdio.h>
#include <time.h>

void wait(int seconds);


void wait(int seconds)
{
	clock_t end_wait = (clock() + (seconds * CLOCKS_PER_SEC));
	while (clock() < end_wait) {}
}

int main()
{
	time_t go, stop;
	int i;
	go = time(NULL);
	printf("\nStarting countdown...\n\n");
	for (i=10; i>-1; i--)
	{
		printf("- %d", i);
		wait(1);
	}
	stop = time(NULL);
	printf("\nRuntime: %.0f seconds\n", difftime(stop, go));
	return 0;
}
/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ ./wait 

Starting countdown...

- 10- 9- 8- 7- 6- 5- 4- 3- 2- 1- 0
Runtime: 11 seconds
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ 
*/
