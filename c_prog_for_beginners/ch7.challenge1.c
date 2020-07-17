#include <stdio.h>

int main()
{
	printf("How many (*) would you like to see? :");
	int count;
	scanf("%d", &count);
	int loopCount = 1;
	while (loopCount <= count) {
		printf("* %d", loopCount);
		loopCount++;
	}
	printf("\n");
	return 0;
}

/*
pi@RaspPi4:~/Coding/C_folder/c_prog_for_beginners $ ./ch7.challenge1 
How many (*) would you like to see? :10
* 1* 2* 3* 4* 5* 6* 7* 8* 9* 10
pi@RaspPi4:~/Coding/C_folder/c_prog_for_beginners $ ./ch7.challenge1 
How many (*) would you like to see? :25
* 1* 2* 3* 4* 5* 6* 7* 8* 9* 10* 11* 12* 13* 14* 15* 16* 17* 18* 19* 20* 21* 22* 23* 24* 25
pi@RaspPi4:~/Coding/C_folder/c_prog_for_beginners $ 
*/
