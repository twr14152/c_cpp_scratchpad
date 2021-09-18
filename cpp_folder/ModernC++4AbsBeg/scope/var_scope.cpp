#include <iostream>
#include <string>

using namespace std;

int main()
{ // local scope starts 
	string x = "local scope"; 
	{ //block scope start
		string x = "block scope"; 
		cout << x << endl;
	} //block scope end
	cout << x << endl;
} // local scope ends

/*
toddriemenschneider@Todds-MBP-2 ch21 % ./var_scope 
block scope
local scope
toddriemenschneider@Todds-MBP-2 ch21 % 
*/
