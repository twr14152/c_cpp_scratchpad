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
    ssh_options_set(session, SSH_OPTIONS_HOST, argv[1]);
    ssh_options_set(session, SSH_OPTIONS_USER, "###");

    // Connect to SSH server
    rc = ssh_connect(session);
    if (rc != SSH_OK) {
        fprintf(stderr, "Error connecting to SSH server: %s\n", ssh_get_error(session));
        ssh_free(session);
        exit(EXIT_FAILURE);
    }

    // Authenticate with password
    rc = ssh_userauth_password(session, NULL, "###");
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
    
    printf("\nCommand: %s\n", argv[2]);    
    rc = ssh_channel_request_exec(channel, argv[2]);
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
    printf("\n\n");
    return 0;
}

/*

pi@rasp4:~/Coding/c_folder/misc/network_stuff $ ./ssh_client "sbx-nxos-mgmt.cisco.com" "config t ; logging server 1.1.1.1 ; show run | inc logging"

Command: config t ; logging server 1.1.1.1 ; show run | inc logging
ntp logging
no logging event link-status default
  logging event port link-status
  logging event port trunk-status
  logging event port link-status
  logging event port trunk-status
logging server 1.1.1.1
logging server 10.10.20.175
logging server 2.2.2.3 7 port 25199
logging source-interface loopback0
logging timestamp milliseconds
logging level syslog 7
no logging console


pi@rasp4:~/Coding/c_folder/misc/network_stuff $ ./ssh_client "sbx-nxos-mgmt.cisco.com" "config t ; no logging server 1.1.1.1 ; show run | inc logging"

Command: config t ; no logging server 1.1.1.1 ; show run | inc logging
ntp logging
no logging event link-status default
  logging event port link-status
  logging event port trunk-status
  logging event port link-status
  logging event port trunk-status
logging server 10.10.20.175
logging server 2.2.2.3 7 port 25199
logging source-interface loopback0
logging timestamp milliseconds
logging level syslog 7
no logging console


pi@rasp4:~/Coding/c_folder/misc/network_stuff $ 
*/
