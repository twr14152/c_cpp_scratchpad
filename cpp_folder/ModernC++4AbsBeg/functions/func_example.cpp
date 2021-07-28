#include <iostream>

int intfn();

int main()
{
	std::cout << "The value of a function is: " << intfn() << '\n';;
}

int intfn()
{	
	return 42;
}

/*
toddriemenschneider@Todds-MBP-2 functions % ./func_example 
The value of a function is: 42
toddriemenschneider@Todds-MBP-2 functions % 
*/
