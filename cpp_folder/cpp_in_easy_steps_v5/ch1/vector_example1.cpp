#include <vector>
#include <iostream>
using namespace std;

int main() 
{
	vector<int>test(3, 100);
	cout << "Vector size: " << test.size() << endl;
	cout << "Is empty?: " << test.empty() << endl;
	cout << "First element: " << test.at(0) << endl;
	cout << "Second element: " << test.at(1) << endl;
	test.pop_back(); // Remove final element
	cout << "Final element: " << test.back() << endl;
	cout << "First element: " << test.front() << endl;
	test.push_back(300); //add element
	cout << "Vector size: " << test.size() << endl;
	cout << "The vectors last index value: " << test.back() << endl;
	cout << "the vectors first index value: " << test.front() << endl;
	cout << "First element: " << test.at(0) << endl;
	cout << "Second element: " << test.at(1) << endl;
	cout << "Third element: " << test.at(2) << endl;
	int total = 0;
	for (int i = 0; i < test.size(); i++) {
		cout << "Value of element through loop number " << i << " is " << test[i] << endl;
		total += test[i];
		cout << "The vector has " << test.size() << " elements" << endl;
		cout << "As we loop the value of total is: " << total << endl;
	}
	cout << "total = " << total << endl;

	return 0;
}

/*
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ ./vector_example1 
Vector size: 3
Is empty?: 0
First element: 100
Second element: 100
Final element: 100
First element: 100
Vector size: 3
The vectors last index value: 300
the vectors first index value: 100
First element: 100
Second element: 100
Third element: 300
Value of element through loop number 0 is 100
The vector has 3 elements
As we loop the value of total is: 100
Value of element through loop number 1 is 100
The vector has 3 elements
As we loop the value of total is: 200
Value of element through loop number 2 is 300
The vector has 3 elements
As we loop the value of total is: 500
total = 500
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ 
*/
