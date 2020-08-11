// using a while loop enter 2 ints and print them out. Use '|' to break the loop.

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
		if (c == '|') {
			cout << "Break seq entered" << endl;
			break;
		}else { 
			continue;
		}
	}
}

/*
pi@RaspPi4:~/Coding/CPP_folder/PPPuCPP $ ./ch4_drill_1 
Enter an int value for a: 2
Enter an int value for b: 3
Enter a char value for c ('|' to break loop): f
a: 2 b: 3
Enter an int value for a: 23
Enter an int value for b: 43
Enter a char value for c ('|' to break loop): |
a: 23 b: 43
Break seq entered
*/
