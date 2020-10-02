// Create an Object
// access specifiers { private = default, public, protected }
//
#include <iostream>
#include <string>
using namespace std;

class Dog
{
	int age, weight;
	string color;
	
	public:
	Dog(int, int, string);
	~Dog();
	void bark() {cout << "Woof "<< endl;}
	int getAge() {return age;}
	int getWeight() {return weight;}
	string getColor() {return color;}
};

Dog::Dog(int age, int weight, string color)
{
	this -> age = age;
	this -> weight = weight;
	this -> color = color;
}

Dog::~Dog()
{
	cout << "Object destroyed." << endl;
}

int main()
{
  Dog jack(6, 140, "brown");
  cout << "Jack is a " << jack.getColor() << " dog" << endl;
  cout << "Jack is " << jack.getAge() << " years old" << endl;
  cout << "Jack weighs " << jack.getWeight() << " pounds" << endl;
  jack.bark();
  Dog gibby(4, 60, "black");
  cout << "Gibby is a " << gibby.getColor() << " dog" << endl;
  cout << "Gibby is " << gibby.getAge() << " years old" << endl;
  cout << "Gibby weighs " << gibby.getWeight() << " pounds" << endl;
  gibby.bark();
  return 0;
}

/*
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ ./constructor 
Jack is a brown dog
Jack is 6 years old
Jack weighs 140 pounds
Woof 
Gibby is a black dog
Gibby is 4 years old
Gibby weighs 60 pounds
Woof 
Object destroyed.
Object destroyed.
*/
