// Write to a existing file 

#include <stdio.h>

int main(void)
{
	FILE *fp = fopen("config_script.txt", "a");
	fprintf(fp, "%s", "config t\nrouter ospf 1\nnetwork 0.0.0.0/0 area 0\n");
}

/*
***************
Original script
***************
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ cat config_script.txt 
config t

interface loopback0
 ip address 1.1.1.1/32

router bgp 65535
 network 1.1.1.1 mask 255.255.255.255
 neighbor 157.130.0.2 remote-as 65510
 neighbor 157.130.0.2 prefix-list outbound out
 neighbor 157.130.0.2 prefix-list inbound in
 no auto-summary


pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ 

pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./wr_file 
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ 

***********************************
Config script after running wr_file
***********************************
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ cat config_script.txt 
config t

interface loopback0
 ip address 1.1.1.1/32

router bgp 65535
 network 1.1.1.1 mask 255.255.255.255
 neighbor 157.130.0.2 remote-as 65510
 neighbor 157.130.0.2 prefix-list outbound out
 neighbor 157.130.0.2 prefix-list inbound in
 no auto-summary


config t
router ospf 1
network 0.0.0.0/0 area 0
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ 
*/
