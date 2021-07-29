// allocating dynamic storage (heap) 
// using new and delete

#include <iostream>

int main()
{
	int x {65535};
	std::cout << "The value of x using automatic storage is : " << x << '\n'; 
	int* p = new int { x }; 
	std::cout << "The value of p using dynamic storage is: " << *p << '\n';
	delete p;
}

/*

toddriemenschneider@Todds-MBP-2 ptrs % ./pointers      
The value of x using automatic storage is : 65535
The value of p using dynamic storage is: 65535
toddriemenschneider@Todds-MBP-2 ptrs % 
*/
