#include <stdio.h>

main ()
{
  char input[256], uname[256], passwd[256];
  printf ("Username: \n");
  fgets (input, 256, stdin);
  sscanf(input, "%s", uname);
  printf ("Password: \n");
  fgets (input, 256, stdin);
  sscanf(input, "%s", passwd);
 
  printf("You are now logged in as '%s' with password '%s'\n", uname, passwd);
}
