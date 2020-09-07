#include "Utilities.h"
#include <iostream>

using namespace std;

int main()
{
	int i { 5 };
	cout << i << endl;
	int j { AddTwo(i) };
	cout << j << endl;
	AddTwo(j);
	j = AddTwo(j);
	cout << j << endl;
	return 0;
}
