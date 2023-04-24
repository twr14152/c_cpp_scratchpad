

#include <stdio.h>

int main(void) 
{
  int num = 2;
  char letter ='b';
  
  switch(num)
  {
    case 1: printf("Number is one\n"); break;
    case 2: printf("Number is two\n"); break;
    case 3: printf("Number is three\n"); break;
    default: printf("Number is unrecognized\n");
  }
  switch(letter)
  {
    case 'a': case 'b': case 'c':
    printf("letter is %c\n", letter);break;
    default: printf("letter is unrecognized\n");
  }
}
/*
pi@RaspPi4:~/Coding/C_folder/TCPL/ch2 $ ./switch
Number is two
letter is b
*/
