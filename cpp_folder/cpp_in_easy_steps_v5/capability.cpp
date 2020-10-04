#include <iostream>
using namespace std;

class Bird
{
	public:
		virtual int Talk() const {return-1;}
		virtual int Fly() const {return -1;}
};

class Pigeon : public Bird
{
	public:
		int Talk() const
		{ cout << "Pigeon talk" << endl; return 0;}

		int Fly() const
		{ cout << "Pigeon flies away..." << endl; return 0;}
};

class Chicken : public Bird
{
	public:
		int Talk() const
		{ cout << "Chicken talk" << endl; return 0;}

		int Fly() const
		{ cout << "Chickens cant fly..." << endl; return 0;}
};

int main()
{
	Bird* pPigeon = new Pigeon;
	Bird* pChicken = new Chicken;
	pPigeon -> Talk();
	pChicken -> Talk();
	pPigeon -> Bird::Talk();
	if (-1) {cout << "error-Program ended." << endl; return 0;}
	pPigeon -> Fly();
	pChicken -> Fly();
	return 0;

}
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ ./capability 
Pigeon talk
Chicken talk
error-Program ended.
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ 
