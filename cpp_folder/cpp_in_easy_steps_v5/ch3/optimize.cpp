#include <iostream>
using namespace std;

int computeFactorials(int, int);
int factorial(int);
/*
inline int factorial(int n)
{
	return (n==1)?1:(factorial(n - 1)*n);
}
*/
int main() 
{
	computeFactorials(1, 8);
	return 0;
}

int computeFactorials(int num, int max) 
{
	cout << "Factorials of " << num << ":";
	cout << factorial(num) << endl;
	num++;
	if (num > max)
		return 0;
	else
		computeFactorials(num, max);
}

int factorial(int n) 
{
	int result;
	if (n == 1)
		result = 1;
	else {
		result = (factorial(n - 1) * n);
		return result;
	}
}
/*
 ./main
Factorials of 1:1
Factorials of 2:2
Factorials of 3:6
Factorials of 4:24
Factorials of 5:120
Factorials of 6:720
Factorials of 7:5040
Factorials of 8:40320

*/
