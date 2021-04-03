#include <iostream>
using namespace std;

int main()
{
  int a = 1, b = 2, max;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "(a != 2)? " << ((a != 2)? "a = 1": "a = 2 ")<< endl;
  cout << "(b = 2)? " << ((b = 2)? "b = 2": "b != 2")<< endl;
  max = (( a > b)? a:b);
  cout << "(a > b)? a: b " << "The bigger value is " << max << endl;


  return 0;
}

/*
 ./main
a = 1
b = 2
(a != 2)? a = 1
(b = 2)? b = 2
(a > b)? a: b The bigger value is 2
 
*/
