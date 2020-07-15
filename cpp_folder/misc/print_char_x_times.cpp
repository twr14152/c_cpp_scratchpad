#include <iostream>

using namespace std;

void printLine(int width = 5, char character = 'a') 
{
	for (int i = 0; i < width; i++) {
		cout << character;
	}
	cout << endl;
}



int main() 
{
	printLine(20, '*');
	printLine();
	printLine(50, '>');
}

/*
pi@RaspPi4:~/Coding/CPP_folder/Misc $ ./print_char_x_times 
********************
aaaaa
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
pi@RaspPi4:~/Coding/CPP_folder/Misc $ 
*/

