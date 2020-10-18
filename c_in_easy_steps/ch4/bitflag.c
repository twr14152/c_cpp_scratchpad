//(test-exp)? if-true-do-this : if-false-do-this

#include <stdio.h>

int main(void) 
{
	int flags = 8;
	flags = flags|2;
	printf("Flag 1:%s\n",((flags & 1) > 0)?"ON":"OFF");
	printf("Flag 2:%s\n",((flags & 2) > 0)?"ON":"OFF");
	printf("Flag 4:%s\n",((flags & 4) > 0)?"ON":"OFF");
	printf("Flag 8:%s\n",((flags & 8) > 0)?"ON":"OFF");
	char mask = 15;
	flags = ~flags & mask;//not ~ operator
	printf("Flag 1:%s\n", ((flags & 1)>0)?"ON":"OFF");
	printf("Flag 2:%s\n", ((flags & 2)>0)?"ON":"OFF");
	printf("Flag 3:%s\n", ((flags & 4)>0)?"ON":"OFF");
	printf("Flag 4:%s\n", ((flags & 8)>0)?"ON":"OFF");
	printf("Flag decimal value is now %d\n", flags);
	
	return 0;
}


