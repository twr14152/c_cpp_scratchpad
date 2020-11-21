#include <iostream>

using namespace std;

int main() {
	char letter {'a'};
	cout << "(int)'a' = " << int('a') << endl;
	cout << "(int)'A' = " << (int)'A' << endl;
	cout << "(int)'a' - (int)'A' =  " << ((int)'a' - int('A')) << endl;
	return 0;
}
/*
pi@RaspPi4:~/Coding/CPP_folder/learncpp/ch0 $ ./casting 
(int)'a' = 97
(int)'A' = 65
(int)'a' - (int)'A' =  32
pi@RaspPi4:~/Coding/CPP_folder/learncpp/ch0 $ 
*/
