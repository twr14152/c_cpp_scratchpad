#include <stdio.h>

int main(int argc, char* argv[]) {
	for (int i = 1; i < argc; i++)
	{
		printf("This is command number %d  command %s\n", i ,  argv[i]);
	}
	return 0;
}
/*
pi@RaspPi4:~/Coding/C_folder/misc/ssh_stuff $ ./cli_args "config t" "interface eth0" "ip address 10.0.0.1/24"
This is command number 1  command config t
This is command number 2  command interface eth0
This is command number 3  command ip address 10.0.0.1/24
pi@RaspPi4:~/Coding/C_folder/misc/ssh_stuff $ 
*/
