#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "Please enter two names\n";
	std::string name1;
	std::string name2;
	cin >> name1 >> name2;
	if (name1 == name2) {
		cout << "The names are the same.\n";
	}
	else if (name1 > name2) {
		cout << name1 << " is greater than " << name2 << ".\n";
	}
	else if (name1 < name2) {
		cout << name2 << " is greater than " << name1 << ".\n";
	}
}
/*
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3.4_comparing_strings 
Please enter two names
Jack Gibson
Jack is greater than Gibson.
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ 
*/
