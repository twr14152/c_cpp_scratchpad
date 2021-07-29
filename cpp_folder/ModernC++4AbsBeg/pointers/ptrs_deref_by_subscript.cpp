// allocating memory on the heap using new and delete
// ptrs can be dereferenced by subscript

#include <iostream>

int main()
{
	int* p = new int[3];
	p[0] = 1;
	p[1] = 2;
	p[2] = 3;
	std::cout << "The values are: " << p[0]	<< "," << p[1] << "," <<  p[2] << '\n';
	delete[] p;
}

/*
toddriemenschneider@Todds-MBP-2 ptrs % ./ptrs_deref_by_subscript 
The values are: 1,2,3
toddriemenschneider@Todds-MBP-2 ptrs % 
*/
