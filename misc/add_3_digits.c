#include <stdio.h>

int main(void) 
{
  int num;
  int unit, tens, hundreds;

  printf("Enter a 3 digit number: ");
  scanf("%d", &num);

  unit = num % 10;
  tens = (num/10) % 10;
  hundreds = num/100;

  printf("The total sum of the digits is %d\n.", (unit + tens + hundreds));
  return 0;

}

/*
 ./main
Enter a 3 digit number: 987
The total sum of the digits is 24
. 
*/
