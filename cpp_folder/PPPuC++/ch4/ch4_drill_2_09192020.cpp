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
1 2
a = 1 b = 2
the smaller number is:1
the larger number is:2
2 1
a = 2 b = 1
the smaller number is:1
The larger number is: 2
3 8
a = 3 b = 8
the smaller number is:3
the larger number is:8
8 3
a = 8 b = 3
the smaller number is:3
The larger number is: 8
3 !

 
*/
