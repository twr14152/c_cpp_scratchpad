#include <iostream>

using namespace std;

// declare functions
void one();
void two();

int main() 
{
    cout << "main function" << endl;
    one();
    return 0;
}

void one() 
{
    cout << "function one" << endl;
    two();
}

void two() 
{
    cout << "function two" << endl;
}

/*
pi@raspberrypi:~/Code_folder/cpp_folder $ ./multiple_func_calls 
main function
function one
function two
pi@raspberrypi:~/Code_folder/cpp_folder $ 
*/
