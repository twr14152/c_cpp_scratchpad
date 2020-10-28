#include <stdio.h>

int main()
{
	FILE *file_ptr;
	int i;
	char text[50] = {"Text, one char at a time.\n"};
	file_ptr = fopen("chars.txt", "w");
	if (file_ptr != NULL)
	{
		printf("File chars.txt created\n");
		for (i = 0; text[i]; i++)
		{
			fputc(text[i], file_ptr);
		}
		fclose(file_ptr);
		return 0;
	}
	else
	{
		printf("Unable to create file\n");
		return 1;
	}

	return 0;
}

/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ ./writechars 
File chars.txt created
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ ls -l
total 28
-rw-r--r-- 1 pi pi   25 Oct 28 06:53 chars.txt
-rw-r--r-- 1 pi pi    0 Oct 27 21:47 data.txt
-rwxr-xr-x 1 pi pi 8056 Oct 27 21:47 newfile
-rw-r--r-- 1 pi pi  239 Oct 27 21:47 newfile.c
-rwxr-xr-x 1 pi pi 8096 Oct 28 06:53 writechars
-rw-r--r-- 1 pi pi  382 Oct 28 06:53 writechars.c
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ cat chars.txt 
Text, one char at a time.
pi@RaspPi4:
*/
