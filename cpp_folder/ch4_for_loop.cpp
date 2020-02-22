// Use for loop to determine Char integer value
#include <iostream>

using namespace std;

int main() {
	for (int counter = 0; counter <= 26; ++counter)
	{
		char character = 'A';
		cout << char(character + counter) << "\t" << int(character + counter) << "\n"; 
	}
}

