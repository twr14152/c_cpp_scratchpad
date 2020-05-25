// multiply var a * 2 and a * 3
//
#include <iostream>

int main()
{
	int a {0};
	std::cout << "Enter a number: ";
	std::cin >> a;
	std::cout << "2 x " << a << " = " << a * 2 << '\n';
	std::cout << "3 x " << a << " = "  << a * 3 << '\n';
	return 0;
}

/* Results
Enter a number: 567
2 x 567 = 1134
3 x 567 = 1701
*/
