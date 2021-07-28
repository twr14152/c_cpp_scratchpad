#include <iostream>
#include <string>

int main()
{
	const int c1 = 123;
	const double d = 456.789;
	const std::string s = "hello world";
	const int c2 = c1;

	std::cout << "Constant integer c1 value: " << c1 << std::endl;
	std::cout << "Constant double d value: " << d << std::endl;
	std::cout << "Constant std::string s value: " << s << std::endl;
	std::cout << "Constant int c2 value: " << c2 << std::endl;
}

/*
toddriemenschneider@Todds-MBP-2 constants % ./const_example  
Constant integer c1 value: 123
Constant double d value: 456.789
Constant std::string s value: hello world
Constant int c2 value: 123
toddriemenschneider@Todds-MBP-2 constants % 
*/
