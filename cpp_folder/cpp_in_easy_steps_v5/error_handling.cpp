#include <iostream>
#include <typeinfo>
#include <fstream>
#include <string>
#include <stdexcept>
using namespace std;

int main()
{
  string lang = "C++";
  int num = 1000000000;
  cout << "Program continues..." << endl;
  try 
  { 
    lang.resize(3 * num);
  }
  catch(exception &e)
  { 
    cerr << "Range Exception: " << e.what() << endl;
    cerr << "Exception Type: " << typeid(e).name();
    cerr << endl << "Program terminated." << endl;
    return -1; 
  }
  return 0;
}

/*
 ./main
Program continues...
Range Exception: basic_string::_M_replace_aux
Exception Type: St12length_error
Program terminated.
exit status 255
 
*/
