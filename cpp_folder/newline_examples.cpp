// '/n' vs std::endl - '/n' is preferred for sending text to console
#include <iostream>

int main() 
{
	std::cout << "This is test1\n";
	std::cout << "This is test2" << '\n';
	std::cout << "This is test3" << std::endl;
	return 0;
}
