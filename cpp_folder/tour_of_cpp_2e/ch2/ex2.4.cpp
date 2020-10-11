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


double read_and_sum(int s);

int main()
{
	Vector v(8);
	cout << v.size() << endl;
	cout << &v << endl;
	for (int i = 0; i <= v.size(); i++) {
		cout << "Element " << i << " " << v[i] << endl; 
	}
	double result = read_and_sum(4);
	cout << result << endl;
	return 0;

}

double read_and_sum(int s)
{
	Vector v(s);
	for (int i=0; i!= v.size(); ++i) {
		cin >> v[i];
}
        double sum = 0;
	for (int i=0; i!= v.size(); ++i)
		sum+=v[i];
	return sum;
}

/*
pi@RaspPi4:~/Coding/CPP_folder/tourofcpp/ch2 $ ./ex2.4 
8
0xbedbe200
Element 0 0
Element 1 0
Element 2 0
Element 3 0
Element 4 0
Element 5 0
Element 6 0
Element 7 0
Element 8 2.19202e-311
5
5
5
5
20
pi@RaspPi4:~/Coding/CPP_folder/tourofcpp/ch2 $ 
*/
