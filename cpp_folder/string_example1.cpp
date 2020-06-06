#include <string>
#include <iostream>
using namespace std;

int main()
{
	string name ;
	cout << "Enter full name:";
	cin >> name;
	cout << "Welcome " << name << endl;
	cout << "Please enter full name again:";
	cin.ignore(256, '\n'); //basically this says record until newline entered
	getline(cin, name);
	cout << "Thanks, " << name << endl;
	return 0; 
}

/* First time through - 
Enter full name:Todd Riemenschneider
Welcome Todd
Please enter full name again:
Thanks,  Riemenschneider
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ 

Issue is cin reads the string up until the first space
Leaving the contents after the space in the input buffer.
Which is then read by getline().
*/


/* added cin.ignore(256, '\n');
This says ignore up to 256 characters including spaces until newline
is entered.
Enter full name:Todd Riemenschneider
Welcome Todd
Please enter full name again:Todd Riemenschneider
Thanks, Todd Riemenschneider
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ 
*/


