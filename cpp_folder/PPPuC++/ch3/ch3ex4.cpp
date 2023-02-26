#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int val1, val2, sum, smaller, larger, difference, prod, ratio = 0;
	cout << "Enter two integers values: ";
	cin >> val1 >> val2;
	sum = val1 + val2;
	smaller = val1 < val2 ? val1 : val2;
	larger = val1 < val2 ? val2 : val1;
	if ( val1 > val2 ) {
		difference = val1 - val2;
		ratio = val1/val2;
	}
	else {
		difference = val2 - val1;
		ratio = val2/val1;
	}
	prod = val1 * val2;
	cout << "Sum :" << sum << endl;
	cout << "Smaller :" << smaller << endl;
	cout << "Larger :" << larger << endl;
	cout << "difference :" << difference << endl;
	cout << "Product :" << prod << endl;
	cout << "Ratio : " << ratio << endl;
	return 0;
}

/*
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex4 
Enter two integers values: 9 6
Sum :15
Smaller :6
Larger :9
difference :3
Product :54
Ratio : 1
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ 
*/
