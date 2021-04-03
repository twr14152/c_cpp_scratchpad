#include <iostream>
using namespace std;

int main()
{
  int max = 10;
  char letters[10];
  int nums[10];
  cout << "sizeof(max) = " << sizeof(max) << endl;
  cout << "sizeof('i') = " << sizeof('i') << endl;
  cout << "sizeof(1.1) = " << sizeof(1.1) << endl;
  cout << "sizeof(letters) = " << sizeof(letters) << endl;
  cout << "sizeof(nums) = " << sizeof(nums) << endl;
  return 0;
}

/*
 ./main
sizeof(max) = 4
sizeof('i') = 1
sizeof(1.1) = 8
sizeof(letters) = 10
sizeof(nums) = 40
 
*/
