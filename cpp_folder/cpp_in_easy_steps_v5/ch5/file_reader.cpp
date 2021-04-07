#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
//      char letter;
        string line;
        int i;
        ifstream reader("r1.cfg");
        if (!reader)
        {
                cout << "error reading file" << endl;
                return -1;
        }
        else
                for (i = 0; !reader.eof(); i++)
                {
                //      reader.get(letter);
                //      cout << letter;
                        getline(reader, line);
                        cout << line << endl;
                }
        reader.close();
        cout << "iterations: " << i << endl;
        return 0;
}
/*
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ cat r1.cfg 
config t
hostname r1

no ip domain-name lookup

interface loopback0
 ip address 10.0.0.0/24



pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $
*/

/*
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ ./file_reader 
config t
hostname r1

no ip domain-name lookup

interface loopback0
 ip address 10.0.0.0/24




iterations: 11
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $
*/
