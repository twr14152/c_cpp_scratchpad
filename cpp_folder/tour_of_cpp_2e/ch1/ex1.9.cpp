#include <iostream>

using namespace std;

int main()
{
	int x = 2;
	int y = 3;
	int* p = &x;
	int* q = &y;
	cout << "x = " << x << "\n";
	cout << "y = " << y << "\n";
	cout << "p = " << p << "\n";
	cout << "*p = " << *p << "\n";
	cout << "q = " << q << "\n";
	cout << "*q = " << *q << "\n";
	p = q;
	cout << "p = q :" << p << "\n";
	cout << "*p = " << *p << "\n";
	return 0;
}
/*
pi@RaspPi4:~/Coding/CPP_folder/tourofcpp/ch1 $ ./ex1.9 
x = 2
y = 3
p = 0xbe9ca214
*p = 2
q = 0xbe9ca210
*q = 3
p = q :0xbe9ca210
*p = 3
pi@RaspPi4:~/Coding/CPP_folder/tourofcpp/ch1 $ 
*/
