#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	float conv_miles_kilos {1.609};
	float miles;
	cout << "How many miles did you go?: ";
	cin >> miles;
	cout << miles << " miles converts to " << miles * conv_miles_kilos 
		<< " kilometers.\n";
	return 0;
}	
/*
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex2
How many miles did you go?: 25
25 miles converts to 40.225 kilometers.
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ 
*/
