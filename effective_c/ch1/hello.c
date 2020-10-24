/* According to this book printf("string\n") can open you up for 
 * a security vulnerability and therefore you should use puts
 * for strings to stdout
 * printf("Hello world\n");
 * should only be used for formating
 * printf("%s\n", "hello world")
 * Use puts("string\n") 
 * The return value seems like more work than using (return 0;) 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("Hello, world!");
	return EXIT_SUCCESS;
}
/*
pi@RaspPi4:~/Coding/C_folder/effective_c/ch1 $ ./hello 
Hello, world!
pi@RaspPi4:~/Coding/C_folder/effective_c/ch1 $ 
*/
