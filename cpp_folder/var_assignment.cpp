// Variable initialization and assignment
// Initialization - obj created and given a value upon definition
// Assignment - obj is given a known value after the point of definition
// Uninitualized - obj hasnt been given a known value yet
//
#include <iostream>

int main()
{
	// Direct initialization
	int x{4}; //Preferred method
	int y(5);
	int z = 10;
	// Uninitualized variable
	int u;

	std::cout << "x = " << x << '\n';
	std::cout << "y = " << y << '\n';
	std::cout << "z = " << z << '\n';
	std::cout << "x + y + z = "  << x + y + z << '\n';
	std::cout << "u = " << u << '\n';
	return 0;
}

/*
x = 4
y = 5
z = 10
x + y + z = 19
u = 67044
*/

