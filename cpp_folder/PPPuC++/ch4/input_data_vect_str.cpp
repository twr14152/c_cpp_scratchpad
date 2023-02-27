#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::sort;

int main()
{
	vector<string> data;
	cout << "Enter a sentence <cr>\nType 'break' <cr>\n";
	cout << "The data will be sorted in alphabetical order\n";
	for (string temp; cin >> temp;){
		data.push_back(temp);
		if (temp == "break") {
			data.pop_back();
			break;
		}
	}
	cout << "Number of words: " << data.size() << '\n';
	sort(data.begin(), data.end());

	for (int i = 0; i < data.size(); i++) {

		cout << data[i] << '\n';
	}
}
/*
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch4 $ ./input_data_vect_str
Enter a sentence <cr>
Type 'break' <cr>
The data will be sorted in alphabetical order
This is a test sentence 
break
Number of words: 5
This
a
is
sentence
test
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch4 $ 
*/
