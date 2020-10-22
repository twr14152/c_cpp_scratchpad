//Loops are usually easier to perform similar functions

#include <stdio.h>

void count_down_from(int num);

int main()
{
	int start;
	printf("Enter a positive integer to count down from: ");
	scanf("%d", &start);
	count_down_from(start);
	printf("Lift off!\n");
	return 0;
	
}

void count_down_from( int num)
{
	printf("%d\n", num);
	--num;
	if (num < 0) return;
	else
		count_down_from(num);

}

/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch6 $ ./recursiveFunc 
Enter a positive integer to count down from: 10
10
9
8
7
6
5
4
3
2
1
0
Lift off!
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch6 $ 
*/
