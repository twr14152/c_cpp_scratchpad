#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	std::string op;
	float num1, num2;
	cout << "Enter (+,-,*,/) then two numbers: ";
	cin >> op >> num1 >> num2;
	if (op == "+") cout << num1 + num2 << endl;
	else if (op == "-") cout << num1 - num2 << endl;
	else if (op == "*") cout << num1 * num2 << endl;
	else if (op == "/") cout << num1 / num2 << endl;
	return 0;
}
/*	
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex10    
Enter (+,-,*,/) then two numbers: - 10 5
5
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex10
Enter (+,-,*,/) then two numbers: * 10 5
50
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex10
Enter (+,-,*,/) then two numbers: / 10 5
2
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex10
Enter (+,-,*,/) then two numbers: + 10 5
15
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ 
*/
