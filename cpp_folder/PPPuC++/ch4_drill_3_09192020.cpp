#include <iostream>
using namespace std;

int a {0};
int b {0};


int main()
{
  while(cin >> a >> b) {
    cout << "a = " << a << " " << "b = " << b << endl;
    if ((a == '|' )||( b == '|')) {
      break;
    } else if (a == b) {
      cout << a << " = " << b << endl;
      cout << "The numbers are equal" << endl;
    } else if ( a > b) {
      cout << "the smaller number is:" << b << endl;
      cout << "The larger number is: " << a << endl;
    } else {
      cout << "the smaller number is:" << a << endl;
      cout << "the larger number is:" << b << endl;
    }
  }
  cout << endl;
  return 0;
}

/*
 ./main
13
12
a = 13 b = 12
the smaller number is:12
The larger number is: 13
12
3
a = 12 b = 3
the smaller number is:3
The larger number is: 12
1
1
a = 1 b = 1
1 = 1
The numbers are equal
*/
