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
void setAge(int years)
{
  age = years;
}
void setWeight(int lbs)
{
  weight = lbs;
}
void setColor(string n)
{
  color = n;
}
void bark() {cout << "Woof "<< endl;}
int getAge() {return age;}
int getWeight() {return weight;}
string getColor() {return color;}
};


int main()
{
  Dog jack;
  jack.setAge(6);
  jack.setWeight(140);
  jack.setColor("brown");
  cout << "Jack is a " << jack.getColor() << " dog" << endl;
  cout << "Jack is " << jack.getAge() << " years old" << endl;
  cout << "Jack weighs " << jack.getWeight() << " pounds" << endl;
  jack.bark();
  return 0;
}


/*
 ./main
Jack is a brown dog
Jack is 6 years old
Jack weighs 140 pounds
Woof 

*/
