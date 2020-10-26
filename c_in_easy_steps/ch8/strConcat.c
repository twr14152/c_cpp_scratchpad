//strcat(1st-string, string-to-add-to-1st-string);
//strncat(1st-string, string-to-add-to-1st-string, length);
//
//pointer arithmetic can be used to indicate a different position 
//to start appending - use the syntax below
//
//strncat(1st-string,(string-to-add-to-1st-string+places), length);
//
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[100] = "A place for everything";
	char s2[] = " and Everything in its Place";
	char s3[100] = "The Truth is Rarely Pure";
	char s4[] = " and Never Simple. - Oscar Wilde";
	strcat(s1,s2);
	printf("\n%s\n", s1);
	strncat(s3,s4, 17); // concat the first 17 chars for s4
	printf("\n%s\n", s3);
	strncat(s3,(s4 + 17), 14); // append the last 14 chars at position 17
	printf("\n%s\n", s3);
	
	return 0;
}

/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch8 $ ./strConcat 

A place for everything and Everything in its Place

The Truth is Rarely Pure and Never Simple

The Truth is Rarely Pure and Never Simple. - Oscar Wild
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch8 $ 
*/
