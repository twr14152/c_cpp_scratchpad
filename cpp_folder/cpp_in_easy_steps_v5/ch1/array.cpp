#include <iostream>
using namespace std;

int main()
{
	double nums[3];
	nums[3] = 1.5;
	nums[0] = 2.5;
	nums[1] = 2.75;
	nums[2] = 3.25;
	
	char name[5] = {'T', 'o','d','d','\0'};
	int coords[3][4] = {{1,2,3,4},{5,6,7,8}, {9,10,11,12}};

	cout << "nums[0]: " << nums[0] << endl;
	cout << "nums[1]: " << nums[1] << endl;
	cout << "name[0]: " << name[0] << endl;
	cout << "Text string: " << name << endl;
	cout << "coords[0][2]: " << coords[0][2] << endl;
	cout << "coords[1][2]: " << coords[1][2] << endl;

	return 0;
}
/*
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps/ch1 $ ./array 
nums[0]: 2.5
nums[1]: 2.75
name[0]: T
Text string: Todd
coords[0][2]: 3
coords[1][2]: 7
Segmentation fault  <-- Not sure what the reason for this is
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps/ch1 $ 
*/
