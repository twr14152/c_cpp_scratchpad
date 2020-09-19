#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
	vector<string>v = {"red", "blue", "green", "black", "pink", "yellow"};
	for (string x: v) // for each x in v
		cout << x << ",";
		cout << "\n";

        cout << "Now adding orange to the vector\n";	
	v.push_back("orange");
	for (string x: v)
		cout << x << ",";
	cout << "\n";
	return 0;
}
