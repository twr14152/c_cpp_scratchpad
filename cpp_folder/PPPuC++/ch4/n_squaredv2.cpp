#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void square(int n)
{
	cout << n << '\t' << n * n << '\n';
}

int main()
{
	int i, num;
	cout << "Enter number: ";
	cin >> num;
	for (i = 0; i < 10; i++) {
		square(num);
		num++;
	}
	return 0;
}
/*	
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch4 $ ./n_squaredv2 
Enter number: 13
13	169
14	196
15	225
16	256
17	289
18	324
19	361
20	400
21	441
22	484
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch4 $ 
*/
