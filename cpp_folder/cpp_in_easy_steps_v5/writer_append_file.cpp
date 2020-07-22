#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
        string config = "\n router bgp 65001";
        config.append("\n  10.0.0.0/24 remote-as 65000");
        ofstream writer("r1.cfg", ios::app);
        if (!writer)
        {
                cout << "error openning file" << endl;
                return -1;
        }
        writer << config << endl;
        writer.close();
        return 0;
}

/*
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ cat r1.cfg 
config t
hostname r1

no ip domain-name lookup

interface loopback0
 ip address 10.0.0.0/24


pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ ./writer_append_file 
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ cat r1.cfg 
config t
hostname r1

no ip domain-name lookup

interface loopback0
 ip address 10.0.0.0/24



 router bgp 65001
  10.0.0.0/24 remote-as 65000

*/
