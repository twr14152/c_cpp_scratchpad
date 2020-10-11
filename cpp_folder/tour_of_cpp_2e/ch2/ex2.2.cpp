#include <iostream>

using namespace std;

struct Vector {
	int sz;
	double* elem;
};

void vector_init(Vector&, int);
double read_and_sum(int);
void f(Vector, Vector&, Vector*);

int main() 
{
	cout << "Start of script" << endl;
	cout << read_and_sum(5) << endl;
	cout << "End of script" << endl;
	
}

void vector_init(Vector& v, int s) 
{
	v.elem = new double[s];
	v.sz = s;

}

double read_and_sum(int s)
{
	Vector v;
	vector_init(v, s);
	for (int i=0; i!=s; ++i)
		cin >> v.elem[i];
	double sum = 0;
	for (int i=0; i!=s; ++i)
		sum+=v.elem[i];
	return sum;
	
}
void f(Vector v, Vector& rv, Vector* pv)
{
	int i1 = v.sz;  // access through name
	int i2 = rv.sz; // access through reference
	int i3 = pv->sz; // access through pointer
	cout << i1 << endl;
	cout << i2 << endl;
	cout << i3 << endl;
}

/*
pi@RaspPi4:~/Coding/CPP_folder/tourofcpp/ch2 $ ./ex2.2
Start of script
1
1
1
1
1
5
End of script
pi@RaspPi4:~/Coding/CPP_folder/tourofcpp/ch2 $ 
*/

