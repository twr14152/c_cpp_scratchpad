#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a, b, c;
	cout << "Enter 3 number: ";
	cin >> a >> b >> c;
	if (a > b && a > c && b > c) {
		cout << a << b << c << endl;
	}
	else if ( a < b && a < c && b < c ) {
		cout << c << b << a << endl;
	}
	else if ( a < b && b > c && a < c) {
		cout << b << c << a << endl;
	}
	else if ( a < b && a > c ) {
		cout << b << a << c << endl;
	}
	else if ( a > b && b < c && a > c) {
		cout << a << c << b << endl;
	}
	else if ( a > b && b < c && c > a) {
		cout << c << a << b << endl;
	}
	else if ( a == b ) {
		if ( a < c ) {
			cout << c << a << b << endl;
		}
		else {
			cout << a << b << c << endl;
		}
	}
	else if ( a == c) {
		if ( a < b ) {
			cout << b << c << a << endl;
		}
		else {
			cout << c << a << b << endl;
		}
	}
	else if (b == c) {
		if (a > b) {
			cout << a << b << c << endl;
		}
		else {
			cout << b << c << a << endl;
		}
	}
	return 0;
}
/*
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex6 
Enter 3 number: 1 2 3 
321
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex6 
Enter 3 number: 3 2 1
321
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex6 
Enter 3 number: 2 3 1
321
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex6 
Enter 3 number: 1 1 3
311
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex6 
Enter 3 number: 1 3 1
311
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex6 
Enter 3 number: 1 1 3
311
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex6 
Enter 3 number: 3 3 3
333
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ 
*/
