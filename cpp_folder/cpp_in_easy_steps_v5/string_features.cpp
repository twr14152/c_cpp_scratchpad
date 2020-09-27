#include <string>
#include <iostream>
using namespace std;

void computeFeature(string);

int main() 
{
  string text = "Studying C++ is time consuming";
  computeFeature(text);
  text += " for everyone";
  computeFeature(text);
  text = "C++ is still cool";
  computeFeature(text);
  text.clear();
  computeFeature(text);
  return 0;
}

void computeFeature(string text)
{
  cout << endl << "String: " << text << endl;
  cout << "Size: " << text.size() << endl;
  cout << "Empty?: " << text.empty() << endl;
}

/*
 ./main

String: Studying C++ is time consuming
Size: 30
Empty?: 0

String: Studying C++ is time consuming for everyone
Size: 43
Empty?: 0

String: C++ is still cool
Size: 17
Empty?: 0

String: 
Size: 0
Empty?: 1
 
*/
