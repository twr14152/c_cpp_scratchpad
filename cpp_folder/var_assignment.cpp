// Variable instantiation and assignment
//
//
#include <iostream>

int main()
{
	// Direct initialization
	int x{4}; //Preferred method
	int y(5);
	int z = 10;
	std::cout << "x = " << x << '\n';
	std::cout << "y = " << y << '\n';
	std::cout << "z = " << z << '\n';
	std::cout << "x + y + z = "  << x + y + z << '\n';
	return 0;
}
