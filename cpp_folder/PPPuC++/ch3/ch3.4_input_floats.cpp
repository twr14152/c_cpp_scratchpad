#include <iostream>
#include <string>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	double n;
	cout << "Enter a floating point number: ";
	cin >> n;
	cout << n << " + 1 == " << n + 1
		<< "\nthree times "<< n << " == " << 3 * n
		<< "\ntwice "<< n << " == " << n + n
		<< "\n" << n << " squared == " << n * n
		<< "\nhalf of " << n << " == " << n/2
		<< "\nsquare root of " << n << " == " << sqrt(n)
		<< endl;
}
/*
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3.4_input_floats 
Enter a floating point number: 3.0
3 + 1 == 4
three times 3 == 9
twice 3 == 6
3 squared == 9
half of 3 == 1.5
square root of 3 == 1.73205
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ 
*/
