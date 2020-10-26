//strcpy(target-array, source-array)
//strncpy(target-array, source-array, length)
//The len used with strncpy must be source-array len +1

#include <stdio.h>
#include <string.h>

int main() 
{
	char s1[] = "Larger text string", s2[] = "smaller string";
	printf("\n%s: %d elements", s1, sizeof(s1));
	printf(", %d characters\n", strlen(s1));

	strcpy(s1, s2);
	printf("\n%s: %d elements", s1, sizeof(s1));
	printf(", %d characters\n", strlen(s1));

	strncpy(s1, s2, 5); //copy 1st 5 chars of s2 into s1 and add '\0'
	s1[5] = '\0';

	printf("\n%s: %d elements", s1, sizeof(s1));
	printf(", %d characters\n", strlen(s1));


	return 0;
	
}
/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch8 $ ./stringCopy 

Larger text string: 19 elements, 18 characters

smaller string: 19 elements, 14 characters

small: 19 elements, 5 characters
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch8 $ 
*/
