#include <stdio.h>
#include <string.h>

int main(void) {
	char name[] = "Todd Riemenschneider";
	printf("The name (%s) sizeof() value = %d\n", name, sizeof(name));
	printf("The name (%s) strlen() value = %d\n", name, strlen(name));
	return 0;
}
/*
pi@RaspPi4:~/Coding/C_folder/misc $ gcc -std=c17 strlen_vs_sizeof.c -o strlen_vs_sizeof
pi@RaspPi4:~/Coding/C_folder/misc $ ./strlen_vs_sizeof 
The name (Todd Riemenschneider) sizeof() value = 21
The name (Todd Riemenschneider) strlen() value = 20
pi@RaspPi4:~/Coding/C_folder/misc $ 
*/
