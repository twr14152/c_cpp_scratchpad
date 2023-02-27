#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
	vector<string> names = {"Todd", "Scott", "Erin"};

	cout << "Int Vector\n";
	for (int i : nums) {
		cout << "nums index values are " << i 
			<< ": " <<  nums[i] << endl;
	}
	cout << endl;
	cout << "String Vector\n";
        for (int j = 0; j < names.size(); j++) {
		cout << "Hello " << names[j] << ".\n";
	}
	return 0;
}
/*
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch4 $ ./ch4_vectors 
Int Vector
nums index values are 1: 2
nums index values are 2: 3
nums index values are 3: 4
nums index values are 4: 5
nums index values are 5: 6
nums index values are 6: 7
nums index values are 7: 8
nums index values are 8: 9
nums index values are 9: 10
nums index values are 10: 0

String Vector
Hello Todd.
Hello Scott.
Hello Erin.
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch4 $ 
*/
