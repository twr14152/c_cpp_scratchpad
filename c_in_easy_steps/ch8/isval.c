#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[7];
	int i;
	int flag = 1;
	puts("Enter six digit without any spaces...");
	gets(str);  //get a warning saying this a depricated command
	for (i = 0; i < 6; i++) {
		if(!isdigit( str[i]))
		{
			flag = 0;
		}
		if(isalpha( str[i]))
		{
			printf("Letter %c Found\n", toupper(str[i]));
		}
		else if(ispunct(str[i]))
		{
			printf("Punctuation Found\n");
		}
		else if(isspace( str[i]))
		{
			printf("Space Found\n");
		}
	}
	(flag)? puts("Entry Valid"):puts("Entry Invalid");
	return 0;
}
/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch8 $ ./isval 
Enter six digit without any spaces...
123456
Entry Valid
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch8 $ ./isval 
Enter six digit without any spaces...
abcdef
Letter A Found
Letter B Found
Letter C Found
Letter D Found
Letter E Found
Letter F Found
Entry Invalid
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch8 $ ./isval 
Enter six digit without any spaces...
1.2.3.  
Punctuation Found
Punctuation Found
Punctuation Found
Entry Invalid
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch8 $ 
*/
