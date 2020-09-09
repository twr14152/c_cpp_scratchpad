// To keep track of the number of times an event occurs use post increments var++ vs pre ++var 

#include <iostream>

using namespace std;

int main() 
{
    int num {1};
    int sum {0};
    for (int i {1}; i <= 100; i++) {
        sum += i;
        //cout << "count equals " << i << endl;
        if ( sum % 13 == 0 ) {
            // num++ is a post increment which means the next time through increment by 1
            // ++num is a pre increment which means add 1 immediately 
            cout << sum << " Using num++ line count is " << num++ << endl;
            //cout << sum << " Using ++num line count is " << ++num << endl;  
        }
}
}
/*
78 Using num++ line count is 1
91 Using num++ line count is 2
325 Using num++ line count is 3
351 Using num++ line count is 4
741 Using num++ line count is 5
780 Using num++ line count is 6
1326 Using num++ line count is 7
1378 Using num++ line count is 8
2080 Using num++ line count is 9
2145 Using num++ line count is 10
3003 Using num++ line count is 11
3081 Using num++ line count is 12
4095 Using num++ line count is 13
4186 Using num++ line count is 14
*/
