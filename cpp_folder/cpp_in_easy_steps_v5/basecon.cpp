#include <iostream>
using namespace std;

class Parent
{
	public:
		Parent()
		{
			cout << "Default Parent Constructor called";

		}
		Parent( int a)
		{
			cout << endl << "Overloaded Parent constructor called";
		}
		
};
class Daughter: public Parent
{
	public:
		Daughter()
		{
			cout << endl << " Derived Daughter class default constructor called.";
		}
};

class Son : public Parent
{
	public:
		Son(int a): Parent(a)
	{
		cout << endl << " Derived Son class overloaded constructor called.";
	}
};


int main()
{
	Daughter emma;
	Son Andrew(0);
	cout << endl;
	return 0;
}

/*
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ ./basecon 
Default Parent Constructor called
 Derived Daughter class default constructor called.
Overloaded Parent constructor called
 Derived Son class overloaded constructor called.
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ 
*/
