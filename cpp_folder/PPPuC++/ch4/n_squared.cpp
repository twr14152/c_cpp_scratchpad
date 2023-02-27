#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int square(int n)
{
    return n * n;
}


int main()
{
	int num {0};
	while(num < 10) {
		cout << num << '\t' << square(num) << '\n';
		num++;
	}
	return 0;
}
/*
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch4 $ ./n_squared
0	0
1	1
2	4
3	9
4	16
5	25
6	36
7	49
8	64
9	81
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch4 $ 
*/
