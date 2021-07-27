#include <iostream>
#include <string>

int main()
{
	std::string s;
	std::cout << "Enter a string: ";
	std::getline(std::cin, s);
	std::cout << "You entered: " << s << '\n';
	std::cout << s.c_str();
	std::cout << std::endl;
	std::string mysubstring = s.substr(10, 4);
	std::cout << "The substring value is: "<< mysubstring << std::endl;
	std::string* p = &s;
	std::cout << "Ptr P assigned to &s" << std::endl;
	std::cout << "The ptr obj value is: " << *p << std::endl;
	std::string& copy = *p;
	std::cout << "The reference &copy value is shown by issuing copy : " << copy << std::endl;
	std::cout << "The address of reference &copy is shown by issuing &copy : " << &copy << std::endl;
	std::cout << "Enter your full name: ";
	std::string fullname = "John Doe";
	std::getline(std::cin, fullname);
	std::cout << "Your name is " << fullname << std::endl;
	std::string target_phrase = "C++";
	std::cout << "Enter a sentence: ";
	std::getline(std::cin, target_phrase);
	std::string searchStr = "of";
	std::cout << "Enter a word thats with in the sentence you wrote : ";
	std::getline(std::cin, searchStr);
	auto mysubstringfound = target_phrase.find(searchStr);
	if (mysubstringfound != std::string::npos)
	{
		std::cout << "The word " << searchStr << " can be found at position: " << mysubstringfound << std::endl;
	}
	else
	{
		std::cout << "Substring was not found.." << std::endl;
	}
}
/*
 
toddriemenschneider@Todds-MBP-2 Modcpp4abs % ./string_examples 
Enter a string: This is a test string.
You entered: This is a test string.
This is a test string.
The substring value is: test
Ptr P assigned to &s
The ptr obj value is: This is a test string.
The reference &copy value is shown by issuing copy : This is a test string.
The address of reference &copy is shown by issuing &copy : 0x16f087970
Enter your full name: Todd Riemenschneider
Your name is Todd Riemenschneider
Enter a sentence: My dogs name is Jack
Enter a word thats with in the sentence you wrote : name
The word name can be found at position: 8
toddriemenschneider@Todds-MBP-2 Modcpp4abs % 
*/
