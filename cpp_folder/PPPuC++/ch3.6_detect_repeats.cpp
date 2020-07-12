#include <iostream>
#include <string> // included as recommended practice
using namespace std;

int main()
{
	int number_of_words = 0;
	string previous = " ";
	string current;
	while(cin>>current) {
		++number_of_words;
		if (previous == current)
			cout << "word number" << number_of_words
				<< " repeated: " << current << '\n';
		previous = current;
		if (current == "break")
			break;
	}
}


/*
pi@RaspPi4:~/Coding/CPP_folder/PPPuCPP $ ./ch3.6_detect_repeats 
test
test
word number2 repeated: test
to to
word number4 repeated: to
five five
word number6 repeated: five
one two
break
pi@RaspPi4:~/Coding/CPP_folder/PPPuCPP $ 
*/
