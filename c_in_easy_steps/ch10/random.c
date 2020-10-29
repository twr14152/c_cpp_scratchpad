#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	int i, r, temp, nums[60];
	char buf[4], str[100] = "Your six lucky numbers are: ";
	srand(time(NULL));
	for (i=0; i<60; i++){
		nums[i] = i;
	}
	for (i=1; i<60; i++) {
		r = (rand() % 59) + 1;
		temp = nums[i];
		nums[i] = nums[r];
		nums[r] = temp;
	}
	for(i=1; i<7; i++) {
		sprintf(buf, "%d", nums[i]);
		strcat(buf, " ");
		strcat(str, buf);
	}
	printf("\n%s\n\n", str);
	return 0;
}
/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ ./random 

Your six lucky numbers are: 45 9 8 16 23 10 

pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ ./random 

Your six lucky numbers are: 3 12 20 54 7 48 

pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ 

*/
