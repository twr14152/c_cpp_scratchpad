#include <stdio.h>

#define LINE "___________________"
#define TITLE "C Programming stuff"
#define AUTHOR "Some guy"

#ifdef _WIN32
#define SYSTEM "Windows"
#endif

#ifdef linux
#define SYSTEM "Linux"
#endif

int main()
{
	printf("\n\t %s \n\t %s \n", LINE, TITLE);
	printf("\t by %s \n\t %s \n", AUTHOR, LINE);
	printf("\n Operating System: %s \n", SYSTEM);
	return 0;
}

/*
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch3 $ ./define 

	 ___________________ 
	 C Programming stuff 
	 by Some guy 
	 ___________________ 

 Operating System: Linux 
pi@RaspPi4:~/Coding/C_folder/in_easy_steps/ch3 $ 

*/
