#include <stdio.h>

int main(void)
{
	char* string_ptr = "Whats up!";
	printf("%s", string_ptr); //%s prints out entire string
 	printf("\n");	
	char* char_ptr = "Whats up!";
	printf("%c", *char_ptr);  //%c prints out first character
	printf("\n");
	char *p[] = {"First sentence", "Second sentence", "Third sentence"};
	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", p[i]);
	}
	return 0;
}


/*
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./array_of_ptrs 
Whats up!
W
First sentence
Second sentence
Third sentence
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ 
*/

