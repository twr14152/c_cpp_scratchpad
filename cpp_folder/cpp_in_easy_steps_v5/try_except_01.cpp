// throw() is good for manually throwing exception to customize and test the results
//
#include <iostream>
using namespace std;

int main()
{
  int number;
  try 
  { 
    for (number = 1; number < 21; number ++)
    {
      if (number > 10) throw (number);
      else 
      {
        cout << "Number: " << number << endl;
      }
    }
  }
  catch(int num)
  { 
    cout << "Exception at: " << num << endl; 
  }
  return 0;
}

/*
 ./main
Number: 1
Number: 2
Number: 3
Number: 4
Number: 5
Number: 6
Number: 7
Number: 8
Number: 9
Number: 10
Exception at: 11
 
*/
