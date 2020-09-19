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
    }
  }
  cout << endl;
  return 0;
}
/*
 ./main
1 2
a = 1 b = 2
1
2
a = 1 b = 2
3
4
a = 3 b = 4
4
|

 
*/
