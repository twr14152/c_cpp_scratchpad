#include <stdio.h>

int main()
{
	int val = 12;
	char string[50];
 	//sprintf() used to create a string also adds the terminating '\0'
	sprintf(string, "The value of val is %d\n", val);
	printf("%s", string);
	return 0;
}
/*
toddriemenschneider@Todds-MBP-2 c_folder % ./sprintf_example    
The value of val is 12
toddriemenschneider@Todds-MBP-2 c_folder % 
*/
