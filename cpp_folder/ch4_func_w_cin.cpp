//Enter a number and see the squared value
#include <iostream>


using namespace std;

int square(int x)
{
	return x * x;
}

int main()
{
	int num = 0;
	cout << "Enter a number that you would like to see the squared value of. \n";
	cin >> num;
	cout << "The value of "<< num <<" is: " << square(num) << endl;
}
