// switch will match char, int, enum
// case statements must be constant expressions, NOT variables....

#include <iostream>

int main()
{
	using namespace std;

	//char y = 'y'; //wont work as it's a variable
	constexpr char y = 'y';
	constexpr char n = 'n';

	cout << "Is fire hot?" << '\n';
	
	char ans;
	cin >> ans;

	switch(ans) {
		case n:
			cout << "Bullshit... It is too!" << endl;
			break;
		case y:
			cout << "yep" << endl;
			break;
		case 't': 
			cout << "It worked! 't' is raw char in case.." << endl;
			break;
	}
}
/*
pi@RaspPi4:~/Coding/CPP_folder/PPPuCPP $ ./switch_comparison 
Is fire hot?
y
yep
pi@RaspPi4:~/Coding/CPP_folder/PPPuCPP $ ./switch_comparison 
Is fire hot?
n
Bullshit... It is too!
pi@RaspPi4:~/Coding/CPP_folder/PPPuCPP $ ./switch_comparison 
Is fire hot?
t
It worked! 't' is raw char in case..
pi@RaspPi4:~/Coding/CPP_folder/PPPuCPP $ 
*/
