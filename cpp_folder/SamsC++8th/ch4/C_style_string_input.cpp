//C-style strings and user input
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    cout << "Enter a word not longer than 20 Characters:" << endl;
    char userInput [21] = {'\0'};
    cin >> userInput;

    cout << "Length of your input was: " << strlen(userInput) << endl;
    return 0;
}

/*
 ./main
Enter a word not longer than 20 Characters:
test
Length of your input was: 4
 ./main
Enter a word not longer than 20 Characters:
Riemenschneider
Length of your input was: 15
 ./main
Enter a word not longer than 20 Characters:
Todd_Riemenschneider
Length of your input was: 20
 ./main
Enter a word not longer than 20 Characters:
abcdefghijklmnopqrstuvwxyz
Length of your input was: 26
 
*/
