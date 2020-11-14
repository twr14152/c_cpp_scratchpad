#include <iostream>
using namespace std;

int main()
{
	char letter = 'A';
	int number ;
	number = 100;
	float floatDecimal = 99.9;
	double doubleDecimal = 99.9;
	bool isTrue = true;
	bool isFalse = false;

	cout << "char letter: " << letter << endl;
	cout << "int number: " << number << endl;
	cout << "float: " << floatDecimal << endl;
	cout << "double: " << doubleDecimal << endl;
	cout << "isTrue: " << isTrue << endl;  //always begin bool vars with "is"
	cout << "isFalse: " << isFalse << endl;

	return 0;
}
/*
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps/ch1 $ ./vars
char letter: A
int number: 100
float: 99.9
double: 99.9
isTrue: 1
isFalse: 0
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps/ch1 $ 
*/
