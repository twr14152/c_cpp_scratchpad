#include <iostream>

using namespace std;

int main() {
	int a;
	int b;
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
		else
			cout << "The smaller value is: " << a << "\nThe larger value is:  " << b << endl;
		if (c == '|') {
			cout << "Break seq entered" << endl;
			break;
		}else { 
			continue;
		}
	}
}

/*
pi@RaspPi4:~/Coding/CPP_folder/PPPuCPP $ ./ch4_drill_3 
Enter an int value for a: 2
Enter an int value for b: 2
Enter a char value for c ('|' to break loop): |
a: 2 b: 2
The numbers are equal
Break seq entered
pi@RaspPi4:~/Coding/CPP_folder/PPPuCPP $
*/
