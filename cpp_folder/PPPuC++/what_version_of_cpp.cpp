#include<iostream>

using std::cout;
using std::endl;

int main() {
   if (__cplusplus == 201703L)
      cout << "C++17" << endl;
   else if (__cplusplus == 201402L)
      cout << "C++14" << endl;
   else if (__cplusplus == 201103L)
      cout << "C++11" << endl;
   else if (__cplusplus == 199711L)
      cout << "C++98" << endl;
   else
      cout << "pre-standard C++" << endl;
}
