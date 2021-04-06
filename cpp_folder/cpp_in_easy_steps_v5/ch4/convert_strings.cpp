#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main()
{

	string term = "20";
	int number = 20;
	int num;
	string text;
	stringstream stream; 

	stream << term; // add string to stream
	stream >> num;  // convert string to int
	num /= 4; 
	cout << "Integer value: " << num << endl;

	stream.str("");  // replace value in stream with ""
	stream.clear();  // clear value to reuse

	stream << number; // add int to stream
	stream >> text;   // convert int to string
	text += " Per Cent";
	cout << "String value: "<< text <<endl;

	return 0;
}


pi@RaspPi4:~/Coding/CPP_folder/Misc $ ./convert_strings 
Integer value: 5
String value: 20 Per Cent
pi@RaspPi4:~/Coding/CPP_folder/Misc $ 

