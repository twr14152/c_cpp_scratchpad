#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int num;
	cout << "Enter a number to see if its even or odd: ";
	cin >> num;
	if (num % 2 == 0) {
		cout << num << " is even" << endl;
	}
	else {
		cout << num << " is odd" << endl;
	}
	return 0;
}
/*
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex8
Enter a number to see if its even or odd: 10
10 is even
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex8
Enter a number to see if its even or odd: 11
11 is odd
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex8
Enter a number to see if its even or odd: 21
21 is odd
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex8
Enter a number to see if its even or odd: 22
22 is even
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ 
*/
