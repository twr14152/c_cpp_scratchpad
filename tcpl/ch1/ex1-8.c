#include <stdio.h>

int main(void)
{
  int c = 0;
  int s = 0;
  int t = 0;
  int nl = 0;
  
  while ((c = getchar())!= EOF) {
    if (c == '\n')
      ++nl;
    else if (c == '\t')
      ++t;
    else if (c == ' ')
      ++s;
    else
      continue;
  }
  printf("Number of tabs %d\n", t);
  printf("Number of blanks %d\n", s);
  printf("Number of newlines %d\n", nl);
  return 0;
}

/*
pi@RaspPi4:~/Coding/C_folder/TCPL/ch1 $ ./ex1-8 < test
Number of tabs 3
Number of blanks 3
Number of newlines 6
pi@RaspPi4:~/Coding/C_folder/TCPL/ch1 $
