#include <stdio.h>

int main()
{
	char str[51];
	printf("\nEnter up to 50 characters with spaces:\n");
	fgets(str, sizeof(str), stdin);
	printf("fgets() read: ");
	puts(str);

	printf("\nEnter up to 50 characters with spaces:\n");
	scanf("%s", str);
	printf("scanf() read: %s\n", str);
	return 0;

}

/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch8 $ ./fgetsputs 

Enter up to 50 characters with spaces:
This a comparing fgets with scanf
fgets() read: This a comparing fgets with scanf


Enter up to 50 characters with spaces:
This is comparing fgets with scanf
scanf() read: This
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch8 $ 
*/
