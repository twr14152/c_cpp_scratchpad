#include <iostream>
using namespace std;

int main()
{
  int num = 21; 
  int factor = 2;
  char letter = 'A';
  float result = 0.0;
  cout << "Integer division: " << (num/factor) << endl;
  // C-style casting
  result = (float)(num)/factor;
  cout << "Cast division float: " << result << endl;
  // newer style casting
  num = static_cast<int>(letter);
  cout << "Cast character int: " << num << endl;
  letter = static_cast<char>(89);
  cout << "Cast integer char: " << letter << endl;
  return 0;
}

/*
 ./main
Integer division: 10
Cast division float: 10.5
Cast character int: 65
Cast integer char: Y
 
*/
