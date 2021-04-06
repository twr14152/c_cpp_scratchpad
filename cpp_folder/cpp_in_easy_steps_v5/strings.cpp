#include <iostream>
#include <string>
using namespace std;

int main() 
{
  string text = "9";
  string term ("9 ");
  string info = "Toys";
  string color;

  // old style C string
  char hue[4] = {'R','e','d','\0'};
  color = hue;
  info = " Ballons";

  text += (term + color + info);
  cout << endl << text << endl;
  return 0;
}
/*
 ./main
99 Red Ballons
 
*/
