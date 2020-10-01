// Ptr and Ref example
#include <iostream>
using namespace std;

inline void add(int& a, int* b)
{
  cout << "Total: " << (a + *b) << endl;
}

int main()
{
  int num = 100, sum = 500;
  int& rNum = num;
  int* ptr = &num;
  void(*fn)(int& a, int* b) = add;
  cout << "Reference: " << rNum << endl;
  cout << "Pointer: " << *ptr << endl;
  ptr = &sum;
  cout << "Pointer now: " << *ptr << endl;
  fn(rNum, ptr);
  return 0;
}

/*
 ./main
Reference: 100
Pointer: 100
Pointer now: 500
Total: 600

*/
