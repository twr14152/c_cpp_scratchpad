#include <iostream>
using namespace std;

double smaller {0};
double larger {0};
double your_num {0};

int main()
{
  while(cin >> your_num) {
    if (your_num > larger) {
      larger = your_num;
      cout << "The larger number is : " << larger << endl;
    } else if (your_num < smaller) {
      smaller = your_num;
      cout << "The smaller number is : " << smaller << endl;
    }
    cout << "largest number so far is " << larger << endl; 
    cout << "smallest number so far is " << smaller << endl;
    }
return 0;
}

/*
 ./main
10
The larger number is : 10
largest number so far is 10
smallest number so far is 0
.2
largest number so far is 10
smallest number so far is 0
0.002
largest number so far is 10
smallest number so far is 0
10
largest number so far is 10
smallest number so far is 0
11
The larger number is : 11
largest number so far is 11
smallest number so far is 0
-1      
The smaller number is : -1
largest number so far is 11
smallest number so far is -1
*/
