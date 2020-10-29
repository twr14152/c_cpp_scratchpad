#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	int i, r, temp, nums[60];
	char buf[4], str[100] = "Your Ten random numbers are: ";
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
	for(i=1; i<11; i++) {
		sprintf(buf, "%d", nums[i]);
		strcat(buf, " ");
		strcat(str, buf);
	}
	printf("\n%s\n\n", str);
	return 0;
}

pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ ./random 

Your Ten random numbers are: 34 23 17 4 43 31 28 35 55 14 

pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ ./random 

Your Ten random numbers are: 31 42 45 21 25 7 27 33 44 11 

pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ ./random 

Your Ten random numbers are: 21 30 29 40 13 47 55 49 48 45 

pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ 
