#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int num_of_words = 0;
	std::string prev = " ";
	std::string current;
	cout << "Enter word:";
	while(cin >> current) {
		++num_of_words;
		if (prev == current) {
			cout << "Word number " << num_of_words
				<< " repeated: " << current << endl;
			cout << current << " matches " << prev << endl;
			break;
		}
		cout << "No match!\n";
		prev = current;
	
	}
}
/*
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3.6_repeated_words 
Enter word:dog
No match!
cat
No match!
cat
Word number 3 repeated: cat
cat matches cat
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ 
*/
