#include <iostream>
using namespace std;

double a {0};
double b {0};


int main()
{
  while(cin >> a >> b) {
    cout << "a = " << a << " " << "b = " << b << endl;
    if ((a == '|' )||( b == '|')) {
      break;
    } else if (a == b) {
      cout << a << " = " << b << endl;
      cout << "The numbers are equal" << endl; 
    } else if (( a > b) && (b < (1.0/100))) {
      cout << "The numbers are almost equal" << endl;
      cout << "The smaller number is: " << b << endl;
      cout << "The larger number is: " << a << endl;
    } else if (( b > a) && (a < (1.0/100))) {
      cout << "The numbers are almost equal" << endl;
      cout << "The smaller number is: " << a << endl;
      cout << "The larger number is: " << b << endl;
    }else if ( a > b) {
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
