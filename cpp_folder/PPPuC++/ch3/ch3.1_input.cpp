#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "Enter your first name:" << endl;
	std::string first_name;
	cin >> first_name;
	cout << "Hello, " << first_name << ". Nice to meed you." << endl;
	return 0;
}

/*
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3.1_input 
Enter your first name:
Todd 
Hello. Todd. Nice to meed you.
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ 
*/
