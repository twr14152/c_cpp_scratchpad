#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector <int> vec(3,200);
  cout << "Vector size:" << vec.size() << endl;
  cout << "Is empty?: " << vec.empty() << endl;
  cout << "First element: " << vec.at(0) << endl;
  cout << "Second element: " << vec.at(1) << endl;
  cout << "Third element: " << vec.at(2) << endl;
  vec.pop_back(); //remove final element
  cout << "Vector size: " << vec.size() << endl;
  cout << "Final element: " << vec.back() << endl;
  vec.clear(); // Remove all elements
  cout << "Vector size: " << vec.size() << endl;
  int count = 0;
  for (int i = 20; i <= 61; i+=20)
  {
    vec.push_back(i);
    cout << "Element " << count << ": " << vec.at(count) << endl;
    count++;
  } 
  cout << "Vector size: " << vec.size() << endl;
  cout << "First element: " << vec.front() << endl;
  cout << "Second element: " << vec.at(1) << endl;
  cout << "Third element: " << vec.at(2) << endl;
	return 0;
}
/*
 ./main
Vector size:3
Is empty?: 0
First element: 200
Second element: 200
Third element: 200
Vector size: 2
Final element: 200
Vector size: 0
Element 0: 20
Element 1: 40
Element 2: 60
Vector size: 3
First element: 20
Second element: 40
Third element: 60
 
*/
