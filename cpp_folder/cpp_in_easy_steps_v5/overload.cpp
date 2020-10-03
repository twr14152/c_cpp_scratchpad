// Create an Object
// access specifiers { private = default, public, protected }
// Example how to overload methods bark() and Dog()

#include <iostream>
#include <string>
using namespace std;

class Dog
{
	int age, weight;
	string color;
	
	public:
        Dog(int, int, string);
	Dog();
	Dog(int, int);
	~Dog();
	void bark() {cout << "Woof "<< endl;}
	void bark(string noise) {cout << noise << endl;}
	int getAge() {return age;}
	int getWeight() {return weight;}
	string getColor() {return color;}
};
Dog::Dog()
{
	age = 1;
	weight = 2;
	color = "black";
}

Dog::Dog(int age, int weight)
{
	this -> age = age;
	this -> weight = weight;
	color = "white";
}

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
  Dog rex;
  cout << "Rex is a " << rex.getAge();
  cout << " year old " << rex.getColor();
  cout << " dog who weighs " << rex.getWeight();
  cout << " pounds." ;
  rex.bark(" GRRRR!");
  Dog sammy(2,6);
  cout << "Sammy is a " << sammy.getAge();
  cout << " year old " << sammy.getColor();
  cout << " dog who weighs " << sammy.getWeight();
  cout << " pounds.";
  sammy.bark(" BOWOW!");
  return 0;
}

/*
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ ./overload
Jack is a brown dog
Jack is 6 years old
Jack weighs 140 pounds
Woof 
Gibby is a black dog
Gibby is 4 years old
Gibby weighs 60 pounds
Woof 
Rex is a 1 year old black dog who weighs 2 pounds. GRRRR!
Sammy is a 2 year old white dog who weighs 6 pounds. BOWOW!
Object destroyed.
Object destroyed.
Object destroyed.
Object destroyed.
*/
