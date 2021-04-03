#include <iostream>
using namespace std;

int main()
{
  int num = 1 + 4 * 5;
  cout << endl << "Default order: " << num << endl;
  num = (1 + 4)*5;
  cout << "Forced order: " << num << endl << endl;
  num = 7 - 4 + 2;
  cout << "Default direction: " << num << endl;
  num = 7 - (4 + 2);
  cout << "Forced direction: " << num << endl;
  return 0;
}

/*
 ./main

Default order: 21
Forced order: 25

Default direction: 5
Forced direction: 1
 
*/
