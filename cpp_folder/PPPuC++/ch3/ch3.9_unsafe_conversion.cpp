#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	double d = 0;
	cout << "Enter a float: ";
	while (cin >> d) {
		int i = d;
		char c = i;
		int i2 = c;
		cout << "d==" << d << endl;
		cout << "i==" << i << endl;
                cout << "i2==" << i2 << endl;
		cout << "char(" << c << ")\n";
		}
	return 0;
}
/*
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3.9_unsafe_conversion 
Enter a float: 10.0
d==10
i==10
i2==10
char(
)
69
d==69
i==69
i2==69
char(E)
70
d==70
i==70
i2==70
char(F)
71
d==71
i==71
i2==71
char(G)
97
d==97
i==97
i2==97
char(a)
98
d==98
i==98
i2==98
char(b)
99
d==99
i==99
i2==99
char(c)
^C
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ 
*/
