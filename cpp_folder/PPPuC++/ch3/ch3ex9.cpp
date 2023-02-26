#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int num;
	cout << "Enter a number 0 - 5: ";
	cin >> num;
	switch(num) {
	case 0:
		cout << "zero\n";
		break;
	case 1:
		cout << "one\n";
		break;
	case 2:
		cout << "two\n";
		break;
	case 3:
		cout << "three\n";
		break;
	case 4: 
		cout << "four\n";
		break;
	case 5:
		cout << "five\n";
		break;
	default:
		cout << "Not what was asked for.\n";
		break;
	}
	return 0;
}

/*
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex9
Enter a number 0 - 5: 0
zero
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex9
Enter a number 0 - 5: 1
one
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex9
Enter a number 0 - 5: 2
two
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex9
Enter a number 0 - 5: 3
three
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex9
Enter a number 0 - 5: 4    
four
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex9
Enter a number 0 - 5: 5
five
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex9
Enter a number 0 - 5: 6
Not what was asked for.
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $
*/
