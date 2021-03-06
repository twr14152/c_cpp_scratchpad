#include <string>
#include <iostream>
using namespace std;

void computeFeature(string);

int main() 
{
  string a = "This is a test";
  string b = "This is";
  string c = " a test";

  string text = "Studying C++ is time consuming";
  computeFeature(text);
  text += " for everyone";
  computeFeature(text);
  text = "C++ is still cool";
  computeFeature(text);
  text.clear();
  computeFeature(text);
  
  cout << "Appended: " << b.append(c) << endl;
  cout << "Original: " << b << endl << endl;
  cout << "Differ: " << (a==b) << endl;
  cout << "Match: " << (b==c) << endl << endl;

  cout << "Match: " << a.compare(b) << endl;
  cout << "Differ: " << a.compare(c) << endl;
  cout << "Lower ASCII: " << a.compare("ttttt") << endl;

  
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
Appended: This is a test
Original: This is a test

Differ: 1
Match: 0

Match: 0
Differ: 1
Lower ASCII: -1
 
*/
