#include <string>
#include <iostream>
using namespace std;

int main() 
{
	string name, fullname;
	cout << "Please enter your full name: ";
	cin >> name;
	cout << "Welcome " << name << endl;
	cout << "Please re-enter your full name: ";
	cin.ignore(256, '\n');
	getline(cin, fullname);
	cout << "Thanks, " << fullname << endl;
	return 0;
}
/*
pi@RaspPi4:~/Coding/CPP_folder/Misc $ ./input_getline 
Please enter your full name: abc def
Welcome abc
Please re-enter your full name: abc def
Thanks, abc def
pi@RaspPi4:~/Coding/CPP_folder/Misc $
*/
