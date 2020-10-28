#include <stdio.h>

int main()
{
	FILE *nums_ptr, *hint_ptr;
	int nums[20], i, j;
	nums_ptr = fopen("nums.txt", "r");
	hint_ptr = fopen("hint.txt", "w");

	if ((nums_ptr != NULL) && (hint_ptr != NULL))
	{
		for (i = 0; !feof(nums_ptr); i++)
		{
			fscanf(nums_ptr, "%d", &nums[i]);
		}
		fprintf(stdout, "\nTotal numbers found: %d\n", i);
		for (j=0;j<i; j++)
		{
			fprintf(stdout, "%d", nums[j]);
		}
		fprintf(hint_ptr, "\nfscanf and fprintf are flexible\n");
		for (j=0; j<i; j++)
		{
			fprintf(hint_ptr, "%d", nums[j]);
		}
		fclose(nums_ptr);
		fclose(hint_ptr);
	}
	else
	{
		fprintf(stdout, "\nUnable to open file\n");
		return 1;
	}
	return 0;
}
/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ rm hint.txt 
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ gcc fscanprint.c -o fscanprint
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ ./fscanprint 

Total numbers found: 11
12345678910-1225747168pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ cat hint.txt 

fscanf and fprintf are flexible
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ 
*/
