#include <iostream>
#include <vector>

using namespace std;

vector<int> count(4, 0);

int main()
{
	count[0] ++;
	count[1] +=2;
	count[2] = 3;
	count[3] = 4;

	cout << count[0] << count[1] << count[2] << count[3] << endl;
	return 0;
}

/*
pi@RaspPi4:~/Coding/CPP_folder/thinkc++ $ ./vector_ex1 
1234
pi@RaspPi4:~/Coding/CPP_folder/thinkc++ $ 
*/
