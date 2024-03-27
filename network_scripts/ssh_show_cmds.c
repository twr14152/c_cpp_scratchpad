#include <stdio.h>
#include <stdlib.h>
#include <libssh/libssh.h>


int main(int argc , char **cmds) {

    for (int i = 1 ; i < argc; i++ ) {
    
    printf("\nCommand: %s\n", cmds[i]);
    
    // Initialize SSH variables
    ssh_session session;
    int rc;

    // Create SSH session
    session = ssh_new();
    if (session == NULL) {
        fprintf(stderr, "Error creating SSH session\n");
        exit(EXIT_FAILURE);
    }

    // Set SSH options
    ssh_options_set(session, SSH_OPTIONS_HOST, "r1");
    ssh_options_set(session, SSH_OPTIONS_USER, "cisco");

    // Connect to SSH server
    rc = ssh_connect(session);
    if (rc != SSH_OK) {
        fprintf(stderr, "Error connecting to SSH server: %s\n", ssh_get_error(session));
        ssh_free(session);
        exit(EXIT_FAILURE);
    }

    // Authenticate with password
    rc = ssh_userauth_password(session, NULL, "cisco");
    if (rc != SSH_AUTH_SUCCESS) {
        fprintf(stderr, "Error authenticating with password: %s\n", ssh_get_error(session));
        ssh_disconnect(session);
        ssh_free(session);
        exit(EXIT_FAILURE);
    }

    // Open channel for executing command
    ssh_channel channel;
    channel = ssh_channel_new(session);
    if (channel == NULL) {
        fprintf(stderr, "Error creating SSH channel\n");
        ssh_disconnect(session);
        ssh_free(session);
        exit(EXIT_FAILURE);
    }

    // Execute command
    rc = ssh_channel_open_session(channel);
    if (rc != SSH_OK) {
        fprintf(stderr, "Error opening SSH channel: %s\n", ssh_get_error(session));
        ssh_channel_free(channel);
        ssh_disconnect(session);
        ssh_free(session);
        exit(EXIT_FAILURE);
    }
    
    //This is where you loop through commands
    rc = ssh_channel_request_exec(channel, cmds[i]);
    if (rc != SSH_OK) {
        fprintf(stderr, "Error executing command: %s\n", ssh_get_error(session));
        ssh_channel_close(channel);
        ssh_channel_free(channel);
        ssh_disconnect(session);
        ssh_free(session);
        exit(EXIT_FAILURE);
    }


    // Read command output
    char buffer[256];
    int nbytes;
    while ((nbytes = ssh_channel_read(channel, buffer, sizeof(buffer), 0)) > 0) {
        fwrite(buffer, 1, nbytes, stdout);
    }

    // Close channel
    ssh_channel_send_eof(channel);
    ssh_channel_close(channel);
    ssh_channel_free(channel);

    // Disconnect and free SSH session
    ssh_disconnect(session);
    ssh_free(session);
}
    printf("\n\n");
    return 0;
}
/*
(netops) todd@LinuxMint:~/Coding$ ./a.out "show ip route" "show ip int brief | inc Loopback0"

Command: show ip route
Codes: L - local, C - connected, S - static, R - RIP, M - mobile, B - BGP
       D - EIGRP, EX - EIGRP external, O - OSPF, IA - OSPF inter area 
       N1 - OSPF NSSA external type 1, N2 - OSPF NSSA external type 2
       E1 - OSPF external type 1, E2 - OSPF external type 2
       i - IS-IS, su - IS-IS summary, L1 - IS-IS level-1, L2 - IS-IS level-2
       ia - IS-IS inter area, * - candidate default, U - per-user static route
       o - ODR, P - periodic downloaded static route, H - NHRP, l - LISP
       + - replicated route, % - next hop override

Gateway of last resort is not set

      5.0.0.0/32 is subnetted, 1 subnets
B        5.5.5.5 [20/0] via 169.169.169.1, 1d10h
      6.0.0.0/32 is subnetted, 1 subnets
O E1     6.6.6.6 [110/65] via 157.130.0.1, 1d10h, Serial2/0
      10.0.0.0/8 is variably subnetted, 7 subnets, 2 masks
C        10.0.1.0/24 is directly connected, FastEthernet0/0
L        10.0.1.1/32 is directly connected, FastEthernet0/0
O IA     10.0.2.0/24 [110/65] via 157.130.0.1, 1d10h, Serial2/0
O IA     10.0.3.0/24 [110/65] via 157.130.0.3, 1d10h, Serial2/1
C        10.255.255.1/32 is directly connected, Loopback0
O E2     10.255.255.2/32 [110/20] via 157.130.0.1, 1d10h, Serial2/0
O E2     10.255.255.3/32 [110/20] via 157.130.0.3, 1d10h, Serial2/1
      157.130.0.0/16 is variably subnetted, 6 subnets, 2 masks
C        157.130.0.0/31 is directly connected, Serial2/0
L        157.130.0.0/32 is directly connected, Serial2/0
C        157.130.0.1/32 is directly connected, Serial2/0
C        157.130.0.2/31 is directly connected, Serial2/1
L        157.130.0.2/32 is directly connected, Serial2/1
O        157.130.0.4/31 [110/128] via 157.130.0.3, 1d10h, Serial2/1
                        [110/128] via 157.130.0.1, 1d10h, Serial2/0
      169.169.0.0/16 is variably subnetted, 3 subnets, 2 masks
C        169.169.169.0/30 is directly connected, POS3/0
L        169.169.169.2/32 is directly connected, POS3/0
O E2     169.169.169.4/30 [110/20] via 157.130.0.1, 1d10h, Serial2/0
Command: show ip int brief | inc Loopback0
Loopback0              10.255.255.1    YES NVRAM  up                    up      

(netops) todd@LinuxMint:~/Coding
*/
