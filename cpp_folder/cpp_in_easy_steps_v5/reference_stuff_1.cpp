/* References - different than pointers 
Have to be initialized when declared
Cannot be reassigned
Cannot contain a null value
Cannot point to a function
Easier to read and understand
*/
#include <iostream>
using namespace std;

void current_value(int&);
void five_times_current_value(int&);

int main()
{
  int num = 10;
  int& rNum = num;
  current_value(rNum);
  rNum += 15;
  current_value(rNum);
  five_times_current_value(rNum);
  current_value(rNum);
  return 0;
}

void current_value(int& r)
{
  cout << "Current value: " << r << endl;
}

void five_times_current_value(int& r)
{
  r *=3;
}
/*
 ./main
Current value: 10
Current value: 25
Current value: 75

*/
