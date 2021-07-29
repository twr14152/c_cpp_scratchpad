#include <string>
#include <sstream>
#include <iostream>
using namespace std;

int main()
{
	string term = "100";
	int number = 100;
	int num;  // stores converted string
	string text; //stores converted integer
	stringstream stream; // performs conversion
	stream << term; // loads the string
	stream >> num;  // extracts the integer
	num /= 4;  // divide 100 by 4 = 25
	cout << "Integer value: " << num << endl;
	stream.str("");
	stream.clear();
	stream << number; // load integer
	stream >> text;  // extract string
	text += " Per Cent"; 
	cout << "String value: " << text << endl;
	return 0;
}

/*
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ ./convert_int_to_str 
Integer value: 25
String value: 100 Per Cent
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $  
*/
