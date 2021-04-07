#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string router_config = "hostname r1\n";
	router_config.append("no ip domain-name lookup\n");
	router_config.append("ip ssh version 2\n");
	router_config.append("username test password test\n");
	//writer is an arbitrary obj name. Tested with the word balloon and it worked as well
	ofstream writer("router_config.txt");
	if (!writer)
	{
		cout << "Error openning file for output" << endl;
		return -1;
	}
	//Print to screen what will be in your file
	//cout << "Configurations that will be written into file: " << endl << router_config << endl;
	writer << router_config << endl;
	writer.close();
	return 0;
}


/*
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ cat router_config.txt 
hostname r1
no ip domain-name lookup
ip ssh version 2
username test password test

*/
