#include <stdio.h>

int main(int argc, char *argv[])
{
	for (int i = 1 ; i < argc; i++)
	{
		printf("command %d : %s\n", i, argv[i]);
	}
	return 0;
}



/*
pi@RaspPi4:~/Coding/C_folder/ssh_client_stuff/basic_ssh $ ./ssh_cli "cmh1-rtr1" "config t" "router ospf 1" "no auto-summary" "end" 
command 1 : cmh1-rtr1
command 2 : config t
command 3 : router ospf 1
command 4 : no auto-summary
command 5 : end
pi@RaspPi4:~/Coding/C_folder/ssh_client_stuff/basic_ssh $ 
*/
