#include <iostream>
#include <string>
using namespace std;

int main() 
{
  string name;
  cout << "Enter your full name: ";
  cin >> name;
  cout << "Welcome " << name << endl;

  cout << "Please enter your full name: ";
  // Clear buffer before using getline
  cin.ignore(256, '\n');
  getline(cin, name);
  cout << "Your name is : " << name << endl;
  return 0;
}
/*
 ./main
Enter your full name: test name
Welcome test
Please enter your full name: test name
Your name is : test name
 
*/
