#include <stdio.h>
void main (void)
{
  int val; // creates a empty variable val type int
  char string[10] = "250"; 
  /* creates string len of 10 with 250 in it
     sscanf only works with pointers
  */
  sscanf (string, "%d", &val); // takes the value 250 from string assigns to dst mem addr loc
  printf ("The value in the string is %d\n", val);
}
