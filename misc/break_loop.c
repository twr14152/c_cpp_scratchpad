#include <stdio.h>

int main(){
	int num;
	printf("How many times do you want to loop? ");
	scanf("%d", &num);

	for (int i = 0; i < 100; i++)
	{
		printf("Break loop when you reach %d : current loop number %d\n", num, i);
		if(i == num)
		{
			break;
		}
	}
}
/*
pi@RaspPi4:~/Coding/C_folder/misc $ ./break_loop
How many times do you want to loop? 9
Break loop when you reach 9 : current loop number 0
Break loop when you reach 9 : current loop number 1
Break loop when you reach 9 : current loop number 2
Break loop when you reach 9 : current loop number 3
Break loop when you reach 9 : current loop number 4
Break loop when you reach 9 : current loop number 5
Break loop when you reach 9 : current loop number 6
Break loop when you reach 9 : current loop number 7
Break loop when you reach 9 : current loop number 8
Break loop when you reach 9 : current loop number 9
pi@RaspPi4:~/Coding/C_folder/misc $ 
*/
