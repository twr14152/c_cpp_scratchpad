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
			fscanf(nums_ptr, "%d", &nums[1]);
		}
		fprintf(stdout, "\nTotal numbers found: %d\n", i);
		for (j=0;j<i; j++)
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
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ gcc fscanprint.c -o fscanprint
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ ./fscanprint 

Total numbers found: 11
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ ls -l
total 84
-rw-r--r-- 1 pi pi   26 Oct 28 06:55 chars.txt
-rw-r--r-- 1 pi pi  104 Oct 28 07:30 copy.txt
-rw-r--r-- 1 pi pi    0 Oct 27 21:47 data.txt
-rw-r--r-- 1 pi pi  104 Oct 28 07:13 farwell.txt
-rwxr-xr-x 1 pi pi 8220 Oct 28 07:50 fscanprint
-rw-r--r-- 1 pi pi  531 Oct 28 07:50 fscanprint.c
-rw-r--r-- 1 pi pi   72 Oct 28 07:50 hint.txt
-rwxr-xr-x 1 pi pi 8152 Oct 28 07:13 lines
-rw-r--r-- 1 pi pi  453 Oct 28 07:13 lines.c
-rwxr-xr-x 1 pi pi 8056 Oct 27 21:47 newfile
-rw-r--r-- 1 pi pi  239 Oct 27 21:47 newfile.c
-rw-r--r-- 1 pi pi   21 Oct 28 07:48 nums.txt
-rwxr-xr-x 1 pi pi 8172 Oct 28 07:30 readwrite
-rw-r--r-- 1 pi pi  615 Oct 28 07:30 readwrite.c
-rwxr-xr-x 1 pi pi 8096 Oct 28 06:55 writechars
-rw-r--r-- 1 pi pi  384 Oct 28 06:55 writechars.c
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ cat hint.txt 
410-1225483152-1092427276-1092427280000-1091796660-1091796740-1225497312pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ cat nums.txt 
1 2 3 4 5 6 7 8 9 10
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ 
*/
