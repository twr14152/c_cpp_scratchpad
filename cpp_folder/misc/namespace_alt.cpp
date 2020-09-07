#include <string>
#include <iostream>

// Alternative to 'using namespace std'
using std::string;
using std::cout;
using std::endl;

int main()
{
	string Hello{ "Whats up" };
	Hello += " Playa!";
	cout << Hello << endl;
	if (Hello == "Whats up Playa!")
	{
		cout << "WHATS UP!!!!!!!!!!!!!!!!!!!!!!" << endl;
	}
	else {
		cout << "Screw off!" << endl;
	}
}

/*
$ ./namespace_alt 
Whats up Playa!
WHATS UP!!!!!!!!!!!!!!!!!!!!!!
$ 
*/
