#include <stdio.h>

#define DEBUG 1
//define DEBUG 3
//#undef DEBUG


int main()
{
#if DEBUG == 1
	printf("Debug status is 1\n");
#elif DEBUG == 2
	printf("Debug status is 2\n");
#else
#ifdef DEBUG
	printf("Debug is defined!\n");
#endif
#ifndef DEBUG
	printf("Debug is not defined!\n");
#endif
#endif
	return 0;
}

/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch3 $ ./debug 
Debug status is 1
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch3 $ vi debug.c 
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch3 $ gcc debug.c -o debug
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch3 $ ./debug 
Debug is defined!
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch3 $ vi debug.c 
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch3 $ gcc debug.c -o debug
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch3 $ ./debug 
Debug is not defined!
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch3 $ 
*/
