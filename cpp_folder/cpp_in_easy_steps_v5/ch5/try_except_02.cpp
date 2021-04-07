#include <iostream>
#include <string>
using namespace std;

int main()
{
  string lang = "C++";
  try 
  { 
    lang.erase(4,6);
  }
  catch(exception &error)
  { 
    cerr << "Exception: " << error.what() << endl; 
  }
  return 0;
}

/*
 ./main
Exception: basic_string::erase: __pos (which is 4) > this->size() (which is 3)
 
*/
