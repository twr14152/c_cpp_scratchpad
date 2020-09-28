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
	ofstream writer("router_config.txt");
	if (!writer)
	{
		cout << "Error openning file for output" << endl;
		return -1;
	}
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
