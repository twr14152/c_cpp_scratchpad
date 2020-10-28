#include <stdio.h>
#include <string.h>

int main()
{
	FILE *file_ptr;
	char text[50];
	file_ptr = fopen("farwell.txt", "r+a");
	if (file_ptr != NULL)
	{
		printf("The file farewell.txt opened\n");
		while (fgets(text, 50, file_ptr))
		{
			printf("%s", text);
		}
		strcpy(text, "\n\nNew text that gets appended...\n");
		fputs(text, file_ptr);
		fclose(file_ptr);
		return 0;
	}
	else
	{
		printf("Unable to open file\n");
		return 1;
	}
	return 0;
}

/*

pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ ./lines 
The file farewell.txt opened
This is sample text.
Theres no real use other than 
being an example.

pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ cat farwell.txt 
This is sample text.
Theres no real use other than 
being an example.



New text that gets appended...
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ 
/*
