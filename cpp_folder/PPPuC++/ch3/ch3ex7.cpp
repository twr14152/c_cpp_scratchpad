#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	std::string name1;
	std::string name2;
	std::string name3;

	cin >> name1 >> name2 >> name3;
	if ( name1 > name2 ) { 
		if (name1 > name3) 
			if (name2 > name3) {
				cout << name3 << "," << name2 << "," <<  name1 << endl;
			}
			else {
				cout << name2 << "," << name3 << "," << name1 << endl;
			}
	}
	else if (name2 > name1) {
		if (name2 > name3)
			if (name3 > name1) {
				cout << name1 << "," << name3 << "," << name2 << endl;
			}
			else {
				cout << name3 << "," << name1 << "," << name2 << endl;
			}
	}
	else if (name3 > name1) {
	       if ( name3 > name2 )
		       if ( name2 > name1 ) {
			       cout << name1 << "," << name2 << "," << name3 << endl;
		       }
		       else {
			       cout << name2 << "," << name1 << "," << name3 << endl;
		       }
	}
	
	return 0;

}
			

/*
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex7
Steinbeck Hemingway Fitzgerald
Fitzgerald,Hemingway,Steinbeck
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex7
Fitzgerald Steinbeck Hemingway
Fitzgerald,Hemingway,Steinbeck
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ ./ch3ex7
Hemingway Steinbeck Fitzgerald
Fitzgerald,Hemingway,Steinbeck
pi@raspberrypi:~/Code_folder/cpp_folder/PPPv2/ch3 $ 
*/
