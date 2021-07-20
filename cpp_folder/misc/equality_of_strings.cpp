// Use if-else to compare strings 

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	while(true)
	{
		cout << "Enter two strings (a) and (b) to compare: " << endl;
		string a, b;
		std::getline(cin, a);
		std::getline(cin, b);
		if (a == b)
		{
			cout << "MATCH!!!!....End of program." << endl;
			cout << a << " == " << b << endl;
			break;
		}
		else
		{	
			cout << "NO MATCH....TRY AGAIN" << endl;
			cout << a << " != " << b << endl;
		}
	}
}

/*
pi@RaspPi4:~/Coding/CPP_folder/PPPuCPP $ ./equality_of_strings 
Enter two strings (a) and (b) to compare: 
this is not a match
this isnt a match
NO MATCH....TRY AGAIN
this is not a match != this isnt a match
Enter two strings (a) and (b) to compare: 
this is a match
this is a match
MATCH!!!!....End of program.
this is a match == this is a match
pi@RaspPi4:~/Coding/CPP_folder/PPPuCPP $ 
*/
