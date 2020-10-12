// Typecasting from Think C++ book compared to other style
// both appear to work
#include <iostream>

using namespace std;

int main()
{
	double pi {3.14159};
	cout << pi << endl;

	int x = int (pi); //Think C++ had example i've not seen
	cout << x << endl;	
	
	int y = (int) pi; //This is the fmt I've seen
	cout << y << endl;
	
	cout << pi << endl;
	return 0;
}
/*
pi@RaspPi4:~/Coding/CPP_folder/thinkc++ $ ./type_cast_ex1 
3.14159
3
3
3.14159
pi@RaspPi4:~/Coding/CPP_folder/thinkc++ $ 
*/
