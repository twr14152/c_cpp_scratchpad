#include "Utilities.h"
#include <iostream>

using namespace std;

int main()
{
	int i { 5 };
	cout << i << endl;
	int j { AddTwo(i) };
	cout << j << endl;
	AddTwo(j);
	j = AddTwo(j);
	cout << j << endl;
	return 0;
}


/*
pi@RaspPi4:~/Coding/CPP_folder/microsoft_CPP_tut $ g++ -std=c++17 function_example1.cpp Utilities.cpp -o function_example1   
pi@RaspPi4:~/Coding/CPP_folder/microsoft_CPP_tut $ ./function_example1 
5
7
9
pi@RaspPi4:~/Coding/CPP_folder/microsoft_CPP_tut $ 
*/
