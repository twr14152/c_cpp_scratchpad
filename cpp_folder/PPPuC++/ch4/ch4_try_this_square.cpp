#include <iostream>

using namespace std;

void square(int i)
{
  auto result = 0;
  for (auto n {1}; n <= i; n++)
    result += i;
    cout << result << endl; 
}
int main()
{
  square(6);
  square(10);
  square(3);
  return 0;
}
/*
 ./main
36
100
9
 
*/
