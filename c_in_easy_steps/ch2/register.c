#include <stdio.h>


int main() 
{
	register int num = 0;

	while(num < 10)
	{
		printf("%d\n", num);
		num++;
	}
	return 0;
}

/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch2 $ ./register 
0
1
2
3
4
5
6
7
8
9
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch2 $ 
*/
