#include <iostream>

using namespace std;

int main()
{
	int x = 123;
	int& y = x;
	cout << "value of x and y are : " << x << " " << y << endl;	
	cout << "changed value of y to 321" << endl;
	y = 321;
	cout << "value of x and y are : " << x << " " << y << endl;

	int s = 456;
	const int& t = s;

	s = 789; // this works
	cout << "value of s and t are : " << s << " " << t << endl;

	//t = 1001; this will not work because read-only const
	//cout << "value of s and t are : " << s << " " << t << endl;
	return 0;
}

/*
pi@RaspPi4:~/Coding/CPP_folder/ModernCPP $ ./refExample 
value of x and y are : 123 123
changed value of y to 321
value of x and y are : 321 321
value of s and t are : 789 789
pi@RaspPi4:~/Coding/CPP_folder/ModernCPP $ 
*/
