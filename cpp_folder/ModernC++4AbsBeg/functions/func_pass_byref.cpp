#include <iostream>
#include <string>

int  myfunc(int& byreference)
{
	byreference++;
	return byreference;
}

void my_string(const std::string& by_const_str_ref)
{
	std::cout << by_const_str_ref << '\n';
}

int main()
{
	int x = 123;
	std::cout << "The valuee of x is : " << x << '\n';
	std::cout << "The value of x in myfunc(x) is : " << myfunc(x) << '\n';
	std::cout << "The value of x after is: " << x << '\n';
	std::string s = "This is testing strings by passing variables by reference";
	my_string(s);
	
}

/*
toddriemenschneider@Todds-MBP-2 functions % ./func_pass_byref 
The valuee of x is : 123
The value of x in myfunc(x) is : 124
The value of x after is: 124
This is testing strings by passing variables by reference
toddriemenschneider@Todds-MBP-2 functions % 
*/
