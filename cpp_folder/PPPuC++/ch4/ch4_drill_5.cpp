#include <iostream>

using namespace std;

int main() {
	double a;
	double b;
	char c;
	while (true) {
		cout << "Enter an int value for a: ";
		cin >> a;
		cout << "Enter an int value for b: ";
		cin >> b;
		cout << "Enter a char value for c ('|' to break loop): ";
		cin >> c;
		cout << "a: " << a << " b: " << b << endl;
		if (a == b)
			cout << "The numbers are equal" << endl;
		else if (a > b)
			cout << "The smaller value is: " << b << "\nThe larger value is: " << a << endl;
		else if (b < a)
			cout << "The smaller value is: " << a << "\nThe larger value is:  " << b << endl;
		if ((a - b) <= (b - a) && (b - a) <= (1.0/100))
			cout << "The numbers are almost equal.." << b << " - " << a << " = " << b - a << endl;
		else if ((a - b) <= (1.0/100))
			cout << "The number are almost equal..." << a << " - " << b << " = " << a - b << endl;
		if (c == '|') {
			cout << "Break seq entered" << endl;
			break;
		}else { 
			continue;
		}
	}
}
/*
pi@RaspPi4:~/Coding/CPP_folder/PPPuCPP $ ./ch4_drill_5
Enter an int value for a: 10
Enter an int value for b: 9.99
Enter a char value for c ('|' to break loop): a
a: 10 b: 9.99
The smaller value is: 9.99
The larger value is: 10
The number are almost equal...10 - 9.99 = 0.01
Enter an int value for a: 9.99
Enter an int value for b: 10
Enter a char value for c ('|' to break loop): |
a: 9.99 b: 10
The numbers are almost equal..10 - 9.99 = 0.01
Break seq entered
pi@RaspPi4:~/Coding/CPP_folder/PPPuCPP $ 
*/
