#include <iostream>
using namespace std;

int main()
{
	const double PI = 3.1415926536;
	cout << "6\" circle circumference: " << (PI * 6) << endl;
	enum {FIRST=1, SECOND, THIRD, FOURTH, FIFTH, SIXTH};
	cout << "The value of FIRST is: " << FIRST << endl;
	cout << "The value of THIRD is: " << THIRD << endl;
	cout << "The sum of FIRST - SIXTH is: " << (FIRST + SECOND + THIRD + FOURTH + FIFTH + SIXTH) << endl;
	cout << "The value of the FOURTH * FIFTH is: " << (FOURTH * FIFTH) << endl;
	typedef enum { OFF, ON } circuit;
	circuit broken = OFF, connected = ON;
	cout << "Broken circuit:" << broken << endl;
	cout << "Hot circuit: " << connected << endl;
	return 0;
}

/*
6" circle circumference: 18.8496
The value of FIRST is: 1
The value of THIRD is: 3
The sum of FIRST - SIXTH is: 21
The value of the FOURTH * FIFTH is: 20
Broken circuit:0
Hot circuit: 1
*/
