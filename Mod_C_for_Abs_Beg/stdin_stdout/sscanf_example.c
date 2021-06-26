//Reads from char array buffer instead of stdin

#include <stdio.h>

int main(void)
{
	char buff[100] = "config t\nrouter bgp 65535\nnetwork 1.0.0.1 mask 255.255.255.255\n";
	char c[100];
	sscanf(buff, "%100c",&c);
	printf("The value of buff is:\n%s", c);
}
/*
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./sscanf_example 
The value of buff is:
config t
router bgp 65535
network 1.0.0.1 mask 255.255.255.255
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ 
*/
