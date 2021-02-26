#include <stdio.h>

int main() 
{
	int flags = 8; // binary 1000
	printf("flags = %d = 1000 in binary\n", flags);
	flags = flags|2; // 1000 | 0010 = 1010 or 10
	printf("flags|2 is = 1010 or %d\n", flags|2);
	printf("flag 1: %s\n", ((flags & 1) > 0)? "ON": "OFF");
	printf("flag 2: %s\n", ((flags & 2) > 0)? "ON": "OFF");
	printf("flag 3: %s\n", ((flags & 4) > 0)? "ON": "OFF");
	printf("flag 4: %s\n", ((flags & 8) > 0)? "ON": "OFF");
	printf("flags decimal value is %d\n", flags);
	flags = flags << 1; //0101 << 1 = 1010
	printf("flags decimal value is now %d\n", flags);
	return 0;
}

/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch4 $ ./bitflag 
flags = 8 = 1000 in binary
flags|2 is = 1010 or 10
flag 1: OFF
flag 2: ON
flag 3: OFF
flag 4: ON
flags decimal value is 10
flags decimal value is now 20
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch4 $
*/
