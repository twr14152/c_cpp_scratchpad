// Using switch logic to do conversion
#include <iostream>
using namespace std;

int main()
{
	constexpr double cm_per_inch = 2.54;
	double length = 1;
	char unit = ' ';
	cout << "Enter a length followed by a unit (c or i):\n";
	cin >> length >> unit;
	switch(unit) {
		case 'i':
			cout << length << "in == " << cm_per_inch*length << "cm\n";
			break;
		case 'c':
			cout << length << "cm == " << length/cm_per_inch <<"in\n";
			break;
	}
}

