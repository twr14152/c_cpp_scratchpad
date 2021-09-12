#include <iostream>
#include <string>

int main()
{
	std::string s = "This is a string";
	char c1 = s[0];
	char c2 = s.at(1);
	char c3 = s[2];
	char c4 = s.at(3);
	char c5 = s.at(4);
	std::cout << "First characters: " << c1 << '\n';
	std::cout << "Second char: " << c2 << std::endl;
	std::cout << "Third char: " << c3 << std::endl;
	std::cout << "Fourth char: " << c4 << std::endl;
	std::cout << "Fifth char: " << c5 << std::endl;
	return 0;
}
/*
pi@RaspPi4:~/Coding/CPP_folder/Misc $ ./access_characters
First characters: T
Second char: h
Third char: i
Fourth char: s
Fifth char:  
pi@RaspPi4:~/Coding/CPP_folder/Misc $ 
*/
