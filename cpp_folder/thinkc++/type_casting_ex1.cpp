// Typecasting from Think C++ book compared to other old c-style
// both appear to work however neither are the recommended method
// learncpp.com recommends using 'static_cast<type>(var)' method
#include <iostream>

using namespace std;

int main()
{
	double pi {3.14159};
	cout << pi << endl;

	int x = int (pi); //Think C++ had func like form of casting
	cout << x << endl;	
	
	int y = (int) pi; //This is the fmt I've seen
	cout << y << endl;
	
	int z = static_cast<int> (pi); // This is the preferred 
	cout << z << endl;

	cout << pi << endl;
	return 0;
}

/*
pi@RaspPi4:~/Coding/CPP_folder/thinkc++ $ ./type_cast_ex1 
3.14159
3
3
3
3.14159
pi@RaspPi4:~/Coding/CPP_folder/thinkc++ $ 
 
*/
