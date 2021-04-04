#include <iostream>
using namespace std;

int main()
{
  int num = 10;
  char letter = 'T';
  if (num > 5)
  {
    cout << "Number exeeds five" << endl;
  }
  else
  {
    cout << "Number is five or less" << endl;
  }
  if (letter == 'A')
  {
    cout << "Letter is A" << endl;
  }
  else if (letter == 'T')
  {
    cout << "Letter is T" << endl;
  }
  else
  {
    cout << "unknown" << endl;
  }
  return 0;


}

/*
 ./main
Number exeeds five
Letter is T
 
*/
