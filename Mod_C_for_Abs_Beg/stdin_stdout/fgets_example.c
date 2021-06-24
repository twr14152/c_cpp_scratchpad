//fgets is the recommended method for getting string data
//
#include <stdio.h>

int main(void)
{
	printf("Enter string: \n");
	char str[10];
	fgets(str, 10, stdin);
	printf("string entered:%s\n", str);
	//puts(str) easier way to print strings
}

/*
# Notice it only shows 1-9 the last char is \0
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./fgets_example 
Enter string: 
12345678910
string entered:123456789

#Does not honor \n character with in the string
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./fgets_example 
Enter string: 
123\n456\n789 
string entered:123\n456\
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ 
*/
