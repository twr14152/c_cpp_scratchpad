#include <iostream>
#include <string>

int main() 
{
	std::string s = "Hello world...";
	std::cout << s.c_str();
	std::cout << '\n';
}
/*
pi@RaspPi4:~/Coding/CPP_folder/Misc $ ./ptr_to_str 
Hello world...
pi@RaspPi4:~/Coding/CPP_folder/Misc $ 
*/
