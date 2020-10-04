#include <iostream>
using namespace std;

class Parent
{
	public:
		void Common() const
		{ cout << "I am part of the family,";}

		virtual void Identify() const
		{ cout << "I am the parent" << endl;}
};
class Child : public Parent
{
	public:
		void Identify() const
		{cout << "I am the child" << endl;}
};
class Grandchild : public Child
{
	public:
		void Identify() const
		{ cout << "I am the grandchild" << endl;}
		
		void Relate() const
		{ cout << "Grandchild has parent and grandparent";}
};

int main()
{
	Child son;
	Grandchild grandson;
	Parent* ptrChild = &son;
	Parent* ptrGrandchild = &grandson;
	ptrChild -> Common();
	ptrChild -> Identify();
	ptrGrandchild -> Common();
	ptrGrandchild -> Identify();
	ptrChild -> Parent::Common();
	ptrChild -> Parent::Identify();
	grandson.Relate();
	cout << endl;
	return 0;
}

/*
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ ./virtual 
I am part of the family,I am the child
I am part of the family,I am the grandchild
I am part of the family,I am the parent
Grandchild has parent and grandparent
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ 
*/
