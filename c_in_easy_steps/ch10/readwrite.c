#include <stdio.h>

int main()
{
	FILE *orig_ptr;
	FILE *copy_ptr;
	char buffer[1000];
	int num;
	orig_ptr = fopen("farwell.txt", "r");
	copy_ptr = fopen("copy.txt", "w");
	if ((orig_ptr != NULL) && (copy_ptr !=NULL))
	{
		num = fread(buffer, 1, 1000, orig_ptr);
		fwrite(buffer, 1, num, copy_ptr);
		fclose(orig_ptr);
		fclose(copy_ptr);
		printf("Done: original.txt copied to copy.txt\n");
		printf("%d objects copied.\n", num);
		return 0;
	}
	else
	{
		if (orig_ptr == NULL)
			printf("Unable to open original.txt\n");
		if (copy_ptr == NULL)
			printf("Unable to open copy.txt\n");
		return 1;
	}
	return 0;
}

/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ gcc readwrite.c -o readwrite
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ ./readwrite 
Done: original.txt copied to copy.txt
104 objects copied.
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ cat copy.txt 
This is sample text.
Theres no real use other than 
being an example.



New text that gets appended...
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch10 $ 
*/
