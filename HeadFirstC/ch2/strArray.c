#include <stdio.h>


char str[] = "This is a test string";

void passstr(char a[])
{
	printf("This values associated with str array passed to a function as a ptr\n");
	printf("The string says %s\n", a);
	printf("The string size is %d\n", sizeof(a));
}

int main(void)
{	printf("The values associated with global array str\n");
	printf("The string says \"%s\"\n", str);
	printf("The string size is %d\n", sizeof(str));
	passstr(str);
	return 0;
}

/*

pi@raspberrypi:~/Code_folder/c_folder/HeadFirstC/ch2 $ ./strArray 
The values associated with global array str
The string says "This is a test string"
The string size is 22
This values associated with str array passed to a function as a ptr
The string says This is a test string
The string size is 4

*/
