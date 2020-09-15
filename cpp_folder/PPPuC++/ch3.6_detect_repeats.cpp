#include <iostream>
#include <string> 
using namespace std;

int main()
{
	int number_of_words = 0;
	string previous = " ";
	string current;
	while(cin>>current) {
		++number_of_words;
		if (previous == current)
			cout << "word number " << number_of_words
				<< " repeated words: " << current << '\n';
		previous = current;
		if (current == "break")
			break;
	}
}

/*
pi@RaspPi4:~/Coding/CPP_folder/PPPuCPP $ ./ch3.6_detect_repeats 
one
one
word number 2 repeated words: one
two 
three
four
four
word number 6 repeated words: four
^C
pi@RaspPi4:~/Coding/CPP_folder/PPPuCPP $ 
*/
