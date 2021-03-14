#include <iostream>

using namespace std;

int main()
{
	int a = 8, b = 5;

	cout << "addition results: " << (a+b) << endl;
	cout << "subtraction results: " << (a-b)  << endl;
	cout << "product results: " << (a*b) << endl;
	cout << "division results: " << (a/b) << endl;
	cout << "modulo results: " << (a%b) << endl;
	cout << "postfix increment a++ = " << a++ << endl;
	cout << "postfix results a = " << a << endl;
	cout << "prefix results ++a = " << ++a << endl;
	cout << "prefix results a = " << a << endl;

	return 0;
}

/*
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps/ch2 $ ./arithmetic 
addition results: 13
subtraction results: 3
product results: 40
division results: 1
modulo results: 3
postfix increment a++ = 8
postfix results a = 9
prefix results ++a = 10
prefix results a = 10
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps/ch2 $ 
*/
