#include <iostream>
#include <string>
using namespace std;

int main()
{
  string text = "This is the string that we will search";
  int num;
  num = text.find("will", 0);
  cout << "Position: " << num << endl;
  num = text.find_first_of("is");
  cout << "First i: " << num << endl;
  num = text.find_first_not_of("is");
  cout << "First not i: " << num << endl;
  num = text.find_last_of("h");
  cout << "Last h: " << num << endl;
  num = text.find_last_not_of("h");
  cout << "Last not h: " << num << endl;
  return 0;
}
/*
 ./main
Position: 27
First i: 2
First not i: 0
Last h: 37
Last not h: 36
 
*/
