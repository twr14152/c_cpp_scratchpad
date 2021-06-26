#include <stdio.h>

int main(void)
{
	char script[256];
	FILE *fp = fopen("config_script.txt", "r");
	while(fgets(script, 256, fp) != NULL)
	{
		printf("%s", script);
	}
	fclose(fp);
}

/*
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ cat config_script.txt 
---------------------------------------------
config t

interface loopback0
 ip address 1.1.1.1/32

router bgp 65535
 network 1.1.1.1 mask 255.255.255.255
 neighbor 157.130.0.2 remote-as 65510
 neighbor 157.130.0.2 prefix-list outbound out
 neighbor 157.130.0.2 prefix-list inbound in
 no auto-summary

---------------------------------------------

pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./read_file 
config t

interface loopback0
 ip address 1.1.1.1/32

router bgp 65535
 network 1.1.1.1 mask 255.255.255.255
 neighbor 157.130.0.2 remote-as 65510
 neighbor 157.130.0.2 prefix-list outbound out
 neighbor 157.130.0.2 prefix-list inbound in
 no auto-summary
*/


