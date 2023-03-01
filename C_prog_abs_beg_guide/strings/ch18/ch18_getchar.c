#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char msg[25]; //reserves 25 character for msg

	printf("Type up to 25 characters and then press enter\n");
        
	// Use sizeof() for determining length of char[]
  // strlen() is wierd don't use as a loop counter if possible.
  
	for (i=0; i < sizeof(msg); i++) {
		msg[i] = getchar();
		if (msg[i] == '\n')
		{
			i--;
			break;
		}
	}

	putchar('\n');
        
	printf("strlen(msg) = %d\n", strlen(msg));
	printf("sizeof(msg) = %d\n", sizeof(msg));

	for (; i >= 0; i--) {
		putchar(msg[i]);
	}

	putchar('\n');

	return 0;
}
/*
pi@RaspPi4:~/Coding/C_folder/CProg3 $ ./ch18_getchar 
Type up to 25 characters and then press enter
Test test 123

strlen(msg) = 15
sizeof(msg) = 25
321 tset tseT
pi@RaspPi4:~/Cod
*/
