#include <stdio.h>

int main(void)
{
	char* p = "Hello World!";
	printf("String constant: %s\n", p); // Proper way to dereference string constant
	printf("String constant: %c\n", *p);
	printf("String constant: %s\n", *p); // This causes a Segmentation Fault
}

toddriemenschneider@Todds-MBP-2 ModC4AbsBeg % 



/*
toddriemenschneider@Todds-MBP-2 ModC4AbsBeg % ./ptr_str_const 
String constant: Hello World!
String constant: H
zsh: segmentation fault  ./ptr_str_const
toddriemenschneider@Todds-MBP-2 ModC4AbsBeg % 
*/
