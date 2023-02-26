#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "What is your name and age." << endl;
	std::string fname;
	std::string lname;
	int age;
	cin >> fname >> lname >> age;
	std::string fullname = fname + " " + lname + " Jr.";
	cout << "Your name is " << fname << " " << lname <<" and you are " << age << " years old." << endl;
	cout << "Or your name could be " << fullname << endl;
	return 0;
}
/*
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3.3_input_type    
What is your name and age.
Jack Riemenschneider 10
Your name is Jack Riemenschneider and you are 10 years old.
Or your name could be Jack Riemenschneider Jr.
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ 
*/
