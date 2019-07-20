#include <stdio.h>

void main(void)
{
  int a[10];
  int count;
  int i;
  for (count = 0; count < 10; count++)
  {
    a[count] = count * 10 + count;
  }
  printf ("The first and second elements of a are %d and %d\n", 
	a[0], a[1]);
  printf ("Or, as pointers, %d and %d\n", *a, *(a+1));
  printf ("The value of a[count] is %d\n", a[count]); 

  for (i = 0; i < 10; i++)
	{
	printf ("a[%d] is equal to %d\n",i, a[i]);
   }
}
