#include <stdio.h>

int main()
{
	int num, pow;
	int total = 1;
	printf("Enter number: ");
	scanf("%d", &num);
	printf("To the power of: ");
	scanf("%d", &pow);

	while (pow > 0)
	{	
		total = total * num;
		pow--;

	}
	printf("Answer is :%d\n", total);
	return 0;
}


/*
pi@RaspPi4:~/Coding/C_folder/c_prog_for_beginners $ ./ch7.challenge2 
Enter number: 10
To the power of: 2
Answer is :100
pi@RaspPi4:~/Coding/C_folder/c_prog_for_beginners $ ./ch7.challenge2 
Enter number: 5
To the power of: 6
Answer is :15625
pi@RaspPi4:~/Coding/C_folder/c_prog_for_beginners $ 

*/
