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
		if (a > b)
			cout << b << " is smaller than " << a << endl;
		else
			cout << a << " is smaller than " << b << endl;
		if (c == '|') {
			cout << "Break seq entered" << endl;
			break;
		}else { 
			continue;
		}
	}
}

/*
pi@RaspPi4:~/Coding/CPP_folder/PPPuCPP $ ./ch4_drill_2
Enter an int value for a: 2
Enter an int value for b: 4
Enter a char value for c ('|' to break loop): |
a: 2 b: 4
2 is smaller than 4
Break seq entered
*/
