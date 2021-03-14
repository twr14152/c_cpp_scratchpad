#include <iostream>

using namespace std;

int main() 
{
	int a, b;
	cout << "Assign values: ";
	cout << "a = " << (a=8) << " ";
	cout << "b = " << (b=4);
	cout << endl << "Add & assign: ";
	cout << "a += b(a+=4)a = " << (a+=b);
	cout << endl << "Subtract & assign: ";
	cout << "a -= b(12-=4)a = " <<(a-=b);
	cout << endl << "Multiply & assign: ";
	cout << "a *= b(8*=4)a = " << (a*=b);
	cout << endl << "Divide & assign: ";
	cout << "a /= b (32/=4)a = " << (a/=b);
	cout << endl << "Modulus & assign: ";
	cout << "a %= b (8 %= 4)a = " << (a%=b);
	cout << endl;
	return 0;
}
/*
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps/ch2 $ ./assign 
Assign values: a = 8 b = 4
Add & assign: a += b(a+=4)a = 12
Subtract & assign: a -= b(12-=4)a = 8
Multiply & assign: a *= b(8*=4)a = 32
Divide & assign: a /= b (32/=4)a = 8
Modulus & assign: a %= b (8 %= 4)a = 0
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps/ch2 $ 
*/
