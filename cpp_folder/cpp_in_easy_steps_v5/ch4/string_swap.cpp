#include <string>
#include <iostream>
using namespace std;

int main()
{
  string front;
  string back;
  string text = "This is some random statement with no real meaning.";
  front.assign(text);
  cout << endl << "Front: " << front << endl;
  front.assign(text, 0,27);
  cout << endl << "Front: " << front << endl;
  back.assign(text, 27, text.size());
  cout << "Back: " << back << endl;
  back.swap(front);
  cout << endl << "Front: " << front << endl;
  cout << "Back: " << back << endl;
  return 0;
}

/*
 ./main

Front: This is some random statement with no real meaning.

Front: This is some random stateme
Back: nt with no real meaning.

Front: nt with no real meaning.
Back: This is some random stateme
 
*/
