//std::getline(std::cin, target_variable) 
//Use getline because strings contain white space. 
//std::cin good for ints doubles and chars

#include <iostream>
#include <string>

int main() 
{
	std::string s;
	std::cout << "Enter a string: ";
	std::getline(std::cin, s); //preferred method of input for strings
	std::cout << "You entered: " << s << '\n';
	return 0;
}
/*
pi@RaspPi4:~/Coding/CPP_folder/Misc $ ./stringInput 
Enter a string: This is a string.....
You entered: This is a string.....
pi@RaspPi4:~/Coding/CPP_folder/Misc $
*/
