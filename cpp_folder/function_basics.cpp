// function basics
// nested functions not allowed in c++

#include <iostream>


void func_b()
{
	std::cout << "From body of func_b\n";
}

void func_a() 
{
	std::cout << "Start body of func_a\n";
	func_b();
	std::cout << "End body of func_a\n";
}

int main()
{
	std::cout << "Starting body of main()\n";
	func_a();
	func_b();
	std::cout << "Ending body of main()\n";
	return 0;
}



/* output of script
Starting body of main()
Start body of func_a
From body of func_b
End body of func_a
From body of func_b
Ending body of main()
*/

