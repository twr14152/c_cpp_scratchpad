#include <stdio.h>

int main(void)
{
        char filename[256];
        printf("Enter filename: ");
        scanf("%256s", filename);
        printf("Opening file %s", filename);
        FILE *fp = fopen(filename, "r");
        printf("\nThe size of the file is %ld\n\n",  sizeof(filename));
        while (fgets(filename, sizeof(filename), fp) != NULL)
        {
                printf("%s", filename);
        }
        fclose(fp);
        return 0;
}
/*
$ ./openfile_script
Enter filename: config_script.cfg
Opening file config_script.cfg
The size of the file is 256

hostname Router1

no ip domain-lookup
ssh version 2

router ospf 1
 network 0.0.0.0 0.0.0.0 area 0

interface loopback0
 description Router ID 100.1.128.5_ROUTER1
 ip address 100.1.128.5 255.255.255.2555


interface Gi0/1
 no switchport
 ip address 10.1.128.2 255.255.255.128


vty 0 4
 transport input all
 password template

*/
