#include <iostream>
using namespace std;

class Bird
{
	public:
		virtual void Talk() const
		{cout << "A bird talks..." << endl;}

		virtual void Fly() const
		{cout << "A bird flies..." << endl;}
};

class Pigeon : public Bird
{
	public:
		void Talk() const
		{cout << "Pigeon says what?" << endl;}

		void Fly() const
		{cout << "A pigeon flies away..." << endl;}

};

class Chicken : public Bird
{
	public:
		void Talk() const
		{ cout << "Chick talk..." << endl;}

		void Fly() const
		{ cout << "Chickens can't fly..." << endl;}
};

int main() 
{
	Bird* pPigeon = new Pigeon;
	Bird* pChicken = new Chicken;
	pPigeon -> Talk();
	pPigeon -> Fly();
	pChicken -> Talk();
	pChicken -> Fly();
	pPigeon -> Bird::Talk();
	pChicken -> Bird::Fly();
	return 0;
}

/*
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ ./birds 
Pigeon says what?
A pigeon flies away...
Chick talk...
Chickens can't fly...
A bird talks...
A bird flies...
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ 
*/
