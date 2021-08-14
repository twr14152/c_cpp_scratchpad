#include <stdio.h>

int main(){
	int num;
	printf("How many loops do you want to run? ");
	scanf("%d", &num);
	int i = 1;
	do
	{
		if(i == (num + 1))
		{
			break;
		}
		printf("Break loop when you reach %d. Current loop number %d\n", num, i);
		i++;
	} while(1);
}
/*
pi@RaspPi4:~/Coding/C_folder/misc $ ./do_while_loop 
How many loops do you want to run? 7
Break loop when you reach 7. Current loop number 1
Break loop when you reach 7. Current loop number 2
Break loop when you reach 7. Current loop number 3
Break loop when you reach 7. Current loop number 4
Break loop when you reach 7. Current loop number 5
Break loop when you reach 7. Current loop number 6
Break loop when you reach 7. Current loop number 7
pi@RaspPi4:~/Coding/C_folder/misc $ 
*/
