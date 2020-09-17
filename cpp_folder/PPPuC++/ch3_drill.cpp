#include <iostream>
#include <string>
using namespace std;

void simple_error(string a) 
{
  cout << a << endl;
}

int main()
{
  string first_name; 
  cout << "Whats your first name?\n";
  cin >> first_name;
  cout << "Hello  " << first_name << "," << endl;
  cout << "\nI'm writing you to let you know that I am performing a drill in the world longest book. It feels kinda silly writing this out, but its to test the concepts in the chapter." << endl;
  string friends_name;
  cout <<"\nWhats the first name of one of your friends?\n";
  cin >> friends_name;
  cout << "\nHave you seen " << friends_name << " recently?\n";
  char friends_sex {'0'};
  cout << "\nIs " << friends_name << " a male or female (m/f)?\n";
  cin >> friends_sex;
  if (friends_sex == 'm') {
    cout << "\nIf you see " << friends_name << " ask him to give me a call.\n";
  } else {
    cout << "\nIf you see " << friends_name << " ask her to give me a call.\n";
  }
  cout << "\nI know this sounds a little weird, but how old are you again?\n";
  int age;
  cin >> age;
  cout << "\nI know,, more creepiness..You just had a birthday and you are " << age << " years old.\n";
  if (age <= 0 || age >= 110) {
    simple_error("Your kidding!");
  } else if (age < 12) {
    cout << "Next year you will be " << age + 1 << endl;
  } else if (age == 17) {
    cout << "Next year you will be able to vote..." << endl;
  } else if (age > 70) {
    cout << "Hope you are enjoying retirement..." << endl;
  } else {
    cout << "\nWelp " << age << " is a pretty uneventful year.." << endl;
  }
  
  cout << "\n\nWell its been real.." << "\n\n-Todd" << endl;
	

  return 0;
}
