#include <stdio.h>

#define NOTASPACE 'a'

int main(void) {
	int c;
        int repl_var = NOTASPACE;

	while ((c = getchar()) != EOF)
	{
		if (c != ' ') {
			putchar(c);
		} 
		else if (c == ' ') {
			if (repl_var != ' ') {
			    putchar(c);
			}
		/*printf("[Value of repl_var before reassignment is: %c]\n", repl_var);*/
		repl_var = c;
		/*printf("[Value of repl_var after is: %c]\n", repl_var);*/
		}
	}
	return 0;
}
/*
pi@raspberrypi:~/Code_folder/c_folder/tcpl/ch1 $ ./ex1_9 < testdata_ex1_9.txt 
This isamultispaceline.
Thisisadoublespaceline.
Thisisasinglespace.
pi@raspberrypi:~/Code_folder/c_folder/tcpl/ch1 $ 
*/
