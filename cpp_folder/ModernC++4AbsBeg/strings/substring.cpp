#include <iostream>
#include <string>

int main() 
{
	std::string s = "Hello World.";
	std::string mysubstring = s.substr(6, 5);
	std::cout << "The substring value is: " << mysubstring <<'\n';
}
/*
pi@RaspPi4:~/Coding/CPP_folder/Misc $ ./substring 
The substring value is: World
pi@RaspPi4:~/Coding/CPP_folder/Misc $ 
*/
