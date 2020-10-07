#include <iostream>

using namespace std;

#define NAME "This is a testing #DEFINE NAME feature"
#define NUM 3000
#define LINE "**********"

int main()
{
	cout << LINE << LINE << LINE << LINE << endl;
	cout << NAME << endl;
	cout << LINE << LINE << LINE << LINE;
	cout << endl << "NUM is: " << NUM << endl;
	cout << LINE << LINE << LINE << LINE << endl;
	cout << "Multiply NUM by 2 = " << ((NUM) * 2) << endl;
	return 0;
}

/*
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ ./define 
****************************************
This is a testing #DEFINE NAME feature
****************************************
NUM is: 3000
****************************************
Multiply NUM by 2 = 6000
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ 
*/
