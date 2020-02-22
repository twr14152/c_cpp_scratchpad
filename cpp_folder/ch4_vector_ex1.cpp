// First use of vector data structure
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> v = {"This is a test", "This is a test as well", "This is the last test"};
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << "\n";
}
