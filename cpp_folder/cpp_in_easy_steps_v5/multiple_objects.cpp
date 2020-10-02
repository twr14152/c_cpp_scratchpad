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
	void setValues( int, int, string);
	void bark() {cout << "Woof "<< endl;}
	int getAge() {return age;}
	int getWeight() {return weight;}
	string getColor() {return color;}
};
void Dog::setValues(int age, int weight, string color)
{
	this -> age = age;
	this -> weight = weight;
	this -> color = color;
}


int main()
{
  Dog jack;
  jack.setValues(6, 140, "brown");
  cout << "Jack is a " << jack.getColor() << " dog" << endl;
  cout << "Jack is " << jack.getAge() << " years old" << endl;
  cout << "Jack weighs " << jack.getWeight() << " pounds" << endl;
  jack.bark();
  Dog gibby;
  gibby.setValues(4, 60, "black");
  cout << "Gibby is a " << gibby.getColor() << " dog" << endl;
  cout << "Gibby is " << gibby.getAge() << " years old" << endl;
  cout << "Gibby weighs " << gibby.getWeight() << " pounds" << endl;
  jack.bark();
  return 0;
}

/*
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ ./multiple_objects 
Jack is a brown dog
Jack is 6 years old
Jack weighs 140 pounds
Woof 
Gibby is a black dog
Gibby is 4 years old
Gibby weighs 60 pounds
Woof 
*/
