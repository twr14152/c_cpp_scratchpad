#include <libssh/libssh.h>
#include <stdlib.h>
#include <stdio.h>

/*
CSR1000v Host: sandbox-iosxe-latest-1.cisco.com
SSH Port: 22
NETCONF Port: 830
RESTCONF Ports: 443 (HTTPS)
Username: developer
Password: C1sco12345
*/

int show_remote_processes(ssh_session session)
{
  ssh_channel channel;
  int rc;
  printf("Enter commands to run: ");
  char buffer[256];
  fgets(buffer, 256, stdin);
  int nbytes;
 
  channel = ssh_channel_new(session);
  if (channel == NULL)
    return SSH_ERROR;
 
  rc = ssh_channel_open_session(channel);
  if (rc != SSH_OK)
  {
    ssh_channel_free(channel);
    return rc;
  }
 
  rc = ssh_channel_request_exec(channel, buffer);
  if (rc != SSH_OK)
  {
    ssh_channel_close(channel);
    ssh_channel_free(channel);
    return rc;
  }
 
  nbytes = ssh_channel_read(channel, buffer, sizeof(buffer), 0);
  while (nbytes > 0)
  {
    if (write(1, buffer, nbytes) != (unsigned int) nbytes)
    {
      ssh_channel_close(channel);
      ssh_channel_free(channel);
      return SSH_ERROR;
    }
    nbytes = ssh_channel_read(channel, buffer, sizeof(buffer), 0);
  }
 
  if (nbytes < 0)
  {
    ssh_channel_close(channel);
    ssh_channel_free(channel);
    return SSH_ERROR;
  }
 
  ssh_channel_send_eof(channel);
  ssh_channel_close(channel);
  ssh_channel_free(channel);
 
  return SSH_OK;
}

int main(void)
{
  ssh_session my_ssh_session;
  int rc;
  //Log in creds
  char *password;
  char* host = "sandbox-iosxe-latest-1.cisco.com";
  int port = 22;
  char* uname =  "developer";
  int verbosity = SSH_LOG_PROTOCOL; 

  // Open session and set options
  my_ssh_session = ssh_new();
  if (my_ssh_session == NULL)
    exit(-1);
  ssh_options_set(my_ssh_session, SSH_OPTIONS_HOST, host);
  ssh_options_set(my_ssh_session, SSH_OPTIONS_PORT, &port);
  ssh_options_set(my_ssh_session, SSH_OPTIONS_USER, uname); 
  
  // Uncomment to debug session
  //ssh_options_set(my_ssh_session, SSH_OPTIONS_LOG_VERBOSITY, &verbosity);
  
  // Connect to server
  rc = ssh_connect(my_ssh_session);
  if (rc != SSH_OK)
  {
    fprintf(stderr, "Error connecting to localhost: %s\n",
            ssh_get_error(my_ssh_session));
    ssh_free(my_ssh_session);
    exit(-1);
  }
 
  // Authenticate ourselves
  password = getpass("Password: ");
  rc = ssh_userauth_password(my_ssh_session, NULL, password);
  if (rc != SSH_AUTH_SUCCESS)
  {
    fprintf(stderr, "Error authenticating with password: %s\n",
            ssh_get_error(my_ssh_session));
    ssh_disconnect(my_ssh_session);
    ssh_free(my_ssh_session);
    exit(-1);
  }
  //...
  show_remote_processes(my_ssh_session);
  ssh_disconnect(my_ssh_session);
  ssh_free(my_ssh_session);
  printf("\n");
  return 0;
}

/*
pi@RaspPi4:~/Coding/C_folder/misc/ssh_stuff $ ./ssh_client 
Password: 
Enter commands to run: show ip interface brief

Welcome to the DevNet Sandbox for CSR1000v and IOS XE
 
The following programmability features are already enabled:
  - NETCONF
  - RESTCONF
 
Thanks for stopping by.



Interface              IP-Address      OK? Method Status                Protocol
GigabitEthernet1       10.10.20.48     YES NVRAM  up                    up      
GigabitEthernet2       unassigned      YES NVRAM  administratively down down    
GigabitEthernet3       unassigned      YES NVRAM  administratively down down    
Tunnel99911            169.254.255.213 YES manual up                    down    
Tunnel99912            169.254.255.209 YES manual up                    down    
pi@RaspPi4:~/Coding/C_folder/misc/ssh_stuff $ 
*/
