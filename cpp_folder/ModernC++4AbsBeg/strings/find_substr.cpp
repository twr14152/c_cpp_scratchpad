#include <iostream>
#include <string>

int main()
{
	std::string s = "This is a hello world string.";
	std::string stringtofind = "hello";
	std::string::size_type found = s.find(stringtofind);
	if (found != std::string::npos)
	{
		std::cout << "Substring found at position: " << found << '\n';
	}
	else
	{
		std::cout << "The substring is not found." << '\n';
	}
}
/*
pi@RaspPi4:~/Coding/CPP_folder/Misc $ ./find_substr 
Substring found at position: 10
pi@RaspPi4:~/Coding/CPP_folder/Misc $ 
*/
