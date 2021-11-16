#include <stdio.h>

void test_func() {
	printf("This is function is : %s\n", __func__);
}

int main(void) {
  printf("This is line number: %d\n", __LINE__);
  printf("Source file name: %s\n", __FILE__);
  printf("Date created: %s\n", __DATE__);
  printf("Your running c version: %ld\n", __STDC_VERSION__);
  test_func();
  return 0;
}
/*
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ ./a.out
This is line number: 8
Source file name: builtin_macros.c
Date created: Nov 16 2021
Your running c version: 201710
This is function is : test_func
pi@RaspPi4:~/Coding/C_folder/Modern_C_Absolute_beg $ 
*/
