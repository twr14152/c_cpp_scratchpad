#include <iostream>

using namespace std;

//prototype - declaration
void swap(int& a, int& b);

int main()
{
	int x = 17;
	int y = 35;
	cout << "Pre swap() order " << x << "," << y << endl;
	swap(x, y);
	cout << "Post swap() order " << x << "," << y << endl;
	return 0;
}
// The & after the parameter type in the function links the function to the same space in memory
// a and x share the same memory space as do b and y.
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

/*
pi@RaspPi4:~/Coding/CPP_folder/Misc $ ./swap_vars 
Pre swap() order 17,35
Post swap() order 35,17

*/
