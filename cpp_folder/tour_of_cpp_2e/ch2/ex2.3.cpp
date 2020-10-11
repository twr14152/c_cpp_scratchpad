#include <iostream>

using namespace std;

class Vector {
	public:
		Vector(int s) :elem{new double[s]}, sz{s} { } // construct a vector
		double& operator[](int i) { return elem[i]; } // element access subscripting
		int size() { return sz; }
	private:
		double* elem; // pointer to the elements
		int sz;       // the number of elements
};

int main()
{
	Vector v(8);
	cout << v.size() << endl;
	cout << &v << endl;
	for (int i = 0; i <= v.size(); i++) {
		cout << "Element " << i << " " << v[i] << endl; 
	}
}

/*
8
0xbee907ec
Element 0 0
Element 1 0
Element 2 0
Element 3 0
Element 4 0
Element 5 0
Element 6 0
Element 7 0
Element 8 2.19202e-311


------------------
(program exited with code: 0)
Press return to continue
*/
