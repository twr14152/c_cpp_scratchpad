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
