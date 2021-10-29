#include <stdio.h>

int main(void)
{
  int c , i , nwhite, nother;
  int ndigit[10];

  nwhite = nother = 0;
  for (i = 0; i < 10; ++i) {
    ndigit[i] = 0;
  }
  while (( c = getchar()) != EOF) {
    if (c >= '0' && c <= '9')
      ++ndigit[c - '0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
    else 
      ++nother;
  }
  printf("digits = ");
  for (i = 0; i < 10; ++i) {
    printf(" %d", ndigit[i]);
  printf(", white space = %d, other = %d\n", nwhite, nother);

  }
}

/*
 ./main < test
digits =  1, white space = 16, other = 51
 1, white space = 16, other = 51
 0, white space = 16, other = 51
 0, white space = 16, other = 51
 0, white space = 16, other = 51
 0, white space = 16, other = 51
 0, white space = 16, other = 51
 0, white space = 16, other = 51
 0, white space = 16, other = 51
 0, white space = 16, other = 51

*/
