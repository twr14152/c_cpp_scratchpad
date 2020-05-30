#include <iostream>
using namespace std;

int main()
{
	// the \0 last element of char array allows it to be treated as a string
	char testword[27] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
	int coords[2][3] = {{1, 2, 3}, {4,5,6}};
	cout << "testword[3]:" << testword[3] << endl;
	cout << "Total testword array as a string:" << testword << endl;
	cout << "coords[0][2]:" << coords[0][2] << endl;
	cout << "coords[1][3]:" << coords[1][2] << endl;
	return 0;
}
/*
testword[3]:d
Total teststring array as a string:abcdefghijklmnopqrstuvwxyz
coords[0][2]:3
coords[1][3]:6
*/
