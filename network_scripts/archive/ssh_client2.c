#include <stdio.h>
#include <stdlib.h>
#include <libssh/libssh.h>

int verbosity = SSH_LOG_PROTOCOL;

int main(int argc , char *argv[]) {
        
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
    //ssh_options_set(session, SSH_OPTIONS_LOG_VERBOSITY, &verbosity);
    ssh_options_set(session, SSH_OPTIONS_HOST, "sbx-nxos-mgmt.cisco.com");
    ssh_options_set(session, SSH_OPTIONS_USER, "####");

    // Connect to SSH server
    rc = ssh_connect(session);
    if (rc != SSH_OK) {
        fprintf(stderr, "Error connecting to SSH server: %s\n", ssh_get_error(session));
        ssh_free(session);
        exit(EXIT_FAILURE);
    }

    // Authenticate with password
    rc = ssh_userauth_password(session, NULL, "####");
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

    for (int i = 1 ; i < argc; i++ ) {

    for (int i = 1 ; i < argc; i++ ) {
        printf("\nCommand: %s\n", argv[i]);    
        //This is where you loop through commands
        rc = ssh_channel_request_exec(channel, argv[i]);
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
   }
    // Close channel
    ssh_channel_send_eof(channel);
    ssh_channel_close(channel);
    ssh_channel_free(channel);
    // Disconnect and free SSH session
    ssh_disconnect(session);
    ssh_free(session);
    printf("\n\n");
    return 0;
}
/*
pi@rasp4:~/Coding/c_folder/misc/network_stuff $ ./ssh_client2 "show ip int brief ; configure ; interface loopback 55 ; ip address 55.55.55.55 255.255.255.255 ; show run int loopback 55 ; show ip int brief"

Command: show ip int brief ; configure ; interface loopback 55 ; ip address 55.55.55.55 255.255.255.255 ; show run int loopback 55 ; show ip int brief

IP Interface Status for VRF "default"(1)
Interface            IP Address      Interface Status
Vlan11               192.168.11.1    protocol-down/link-down/admin-down 
Vlan12               192.168.12.1    protocol-down/link-down/admin-down 
Vlan13               192.168.14.1    protocol-down/link-down/admin-down 
Vlan14               192.168.90.1    protocol-down/link-down/admin-up   
Vlan16               192.168.89.23   protocol-down/link-down/admin-up   
Vlan25               10.222.249.25   protocol-down/link-down/admin-up   
Vlan50               172.16.1.111    protocol-down/link-down/admin-down 
Vlan77               172.16.1.10     protocol-down/link-down/admin-up   
Vlan88               10.88.88.88     protocol-down/link-down/admin-down 
Vlan89               10.100.100.89   protocol-down/link-down/admin-down 
Vlan100              10.0.0.101      protocol-down/link-down/admin-down 
Vlan112              10.72.240.13    protocol-down/link-down/admin-down 
Vlan113              10.73.148.13    protocol-down/link-down/admin-down 
Vlan121              10.0.0.1        protocol-down/link-down/admin-up   
Vlan204              10.204.204.66   protocol-down/link-down/admin-up   
Vlan3333             10.1.1.2        protocol-down/link-down/admin-down 
Vlan3912             1.1.1.1         protocol-down/link-down/admin-down 
Lo0                  1.1.1.1         protocol-down/link-down/admin-down 
Lo11                 10.0.0.11       protocol-down/link-down/admin-down 
Lo98                 10.98.98.1      protocol-up/link-up/admin-up       
Lo99                 10.99.99.1      protocol-up/link-up/admin-up       
Lo618                159.99.89.99    protocol-up/link-up/admin-up       
Lo648                159.99.99.99    protocol-up/link-up/admin-up       
Lo1001               1.1.1.1         protocol-up/link-up/admin-up       
Eth1/9               1.1.1.1         protocol-down/link-down/admin-down 

!Command: show running-config interface loopback55
!Running configuration last done at: Mon Apr  1 06:36:00 2024
!Time: Mon Apr  1 06:36:00 2024

version 10.3(3) Bios:version  

interface loopback55
  ip address 55.55.55.55/32


IP Interface Status for VRF "default"(1)
Interface            IP Address      Interface Status
Vlan11               192.168.11.1    protocol-down/link-down/admin-down 
Vlan12               192.168.12.1    protocol-down/link-down/admin-down 
Vlan13               192.168.14.1    protocol-down/link-down/admin-down 
Vlan14               192.168.90.1    protocol-down/link-down/admin-up   
Vlan16               192.168.89.23   protocol-down/link-down/admin-up   
Vlan25               10.222.249.25   protocol-down/link-down/admin-up   
Vlan50               172.16.1.111    protocol-down/link-down/admin-down 
Vlan77               172.16.1.10     protocol-down/link-down/admin-up   
Vlan88               10.88.88.88     protocol-down/link-down/admin-down 
Vlan89               10.100.100.89   protocol-down/link-down/admin-down 
Vlan100              10.0.0.101      protocol-down/link-down/admin-down 
Vlan112              10.72.240.13    protocol-down/link-down/admin-down 
Vlan113              10.73.148.13    protocol-down/link-down/admin-down 
Vlan121              10.0.0.1        protocol-down/link-down/admin-up   
Vlan204              10.204.204.66   protocol-down/link-down/admin-up   
Vlan3333             10.1.1.2        protocol-down/link-down/admin-down 
Vlan3912             1.1.1.1         protocol-down/link-down/admin-down 
Lo0                  1.1.1.1         protocol-down/link-down/admin-down 
Lo11                 10.0.0.11       protocol-down/link-down/admin-down 
Lo55                 55.55.55.55     protocol-up/link-up/admin-up       
Lo98                 10.98.98.1      protocol-up/link-up/admin-up       
Lo99                 10.99.99.1      protocol-up/link-up/admin-up       
Lo618                159.99.89.99    protocol-up/link-up/admin-up       
Lo648                159.99.99.99    protocol-up/link-up/admin-up       
Lo1001               1.1.1.1         protocol-up/link-up/admin-up       
Eth1/9               1.1.1.1         protocol-down/link-down/admin-down 


pi@rasp4:~/Coding/c_folder/misc/network_stuff $ 
  */
