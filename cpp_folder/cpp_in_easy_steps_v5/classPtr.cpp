#include <iostream>
using namespace std;

class Base
{
	public:
		void Identify(int adr) const
		{
			cout << "Base class called by 0x" << hex << adr << endl;
		};
};

class SubA : public Base { };
class SubB : public Base { };

int main()
{
	Base* ptrA = new SubA;
	Base* ptrB = new SubB;
	ptrA -> Identify((int) &ptrA);
	ptrB -> Identify((int) &ptrB);
	return 0;
}

/*
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ ./classPtr 
Base class called by 0xbee6721c
Base class called by 0xbee67218
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ 
*/
