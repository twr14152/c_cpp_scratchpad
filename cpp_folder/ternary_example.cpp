#include <iostream>
using namespace std;

int main()
{

	int one, two, largerValue;
	one = 1, two = 2;
	cout << "Variable one value is :";
	cout << ((one != 1)? "not one,": "one, ");
	cout << ((one % 2 != 0)? "odd": "even");

	cout << endl << "Variable two value is: ";
	cout << ((two != 1)? "not one, ": "one,");
	cout << ((two % 2 != 0)? "odd": "even");

	largerValue = (one > two)? one: two;
	cout << endl << "The Greater value is :" << largerValue << endl;
	return 0;
}
/*
Variable one value is :one, odd
Variable two value is: not one, even
The Greater value is :2 
*/
