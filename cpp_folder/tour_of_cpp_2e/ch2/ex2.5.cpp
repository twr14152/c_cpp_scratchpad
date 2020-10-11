#include <iostream>
/*
using namespace std;

enum colors { red, blue, green };
enum class Color { red, blue, green };
enum class Traffic_light { green, yellow, red };

Color col = Color::red;

/*
 * Cant figure this one out.....
Traffic_light light = Traffic_light::red;

Traffic_light& operator++(Traffic_light& t)
{
	switch(t) {
		case Traffic_light::green:
			return t=Traffic_light::yellow;
		case Traffic_light::yellow:
			return t=Traffic_light::red;
		case Traffic_light::red:
			return t=Traffic_light::green;
	}
}

Traffic_light next = ++light;
*/

int main()
{
	cout << "Class based enum\n";
	Color y = Color::blue;
	Color z = Color::green;
	Color v = Color::red;
	
	cout << (int)v << endl;
	cout << (int)y << endl;
	cout << (int)z << endl;

	int col2 = green;
	int col1 = blue;
	int col0 = red;
        cout << "Classic enum values should be 1, 0, 2\n";
	cout << col1 << endl;
	cout << col0 << endl;
	cout << col2 << endl;

	return 0;
}

/*
pi@RaspPi4:~/Coding/CPP_folder/tourofcpp/ch2 $ ./ex2.5
Class based enum
0
1
2
Classic enum values should be 1, 0, 2
1
0
2
pi@RaspPi4:~/Coding/CPP_folder/tourofcpp/ch2 $ 
*/
