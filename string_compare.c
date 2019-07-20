#include <stdio.h>
#include <string.h>

void main (void)
{
  char str1[10] = "catalog";
  char str2[10] = "cat"; 
  printf ("Comparing the strings %s amd %s\n", str1, str2);
  printf ("Are they the same?\n");
  if (strcmp (str1, str2) == 0) //compares the entire string
  {
    printf("The two strings are identical\n");
  }
  else
  {
    printf ("The two strings are not the same.\n");
  }
  printf("Compare the first 3 characters of each string\n");
  if (strncmp (str1, str2, 3) == 0) //compares the first 3 characters of the string
  {
    printf("The two strings are identical\n");
  }
  else
  {
    printf ("The two strings are not the same.\n");
  }
}
