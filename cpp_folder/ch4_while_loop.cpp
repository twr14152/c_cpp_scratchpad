// This program will print the char and the int value of char
#include <iostream>

using namespace std;

int main() {
	int counter = 0;
	while (counter <= 26)
	{
		char character = 'a';
		cout << char(character + counter) << "\t" << int(character + counter) << "\n"; 
		++counter;
	}
}
