#include <iostream>

using namespace std;

int main()
{
  int a {0};
  do {
    a++;
    printf("Count a = %d\n", a);
  } while (a < 10);
  return 0;
}

/*
./main
Count a = 1
Count a = 2
Count a = 3
Count a = 4
Count a = 5
Count a = 6
Count a = 7
Count a = 8
Count a = 9
Count a = 10
 
*/
