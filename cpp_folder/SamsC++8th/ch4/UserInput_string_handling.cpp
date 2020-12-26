// UserInput and string handling
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string greetString ("Hello std::string!");
    cout << "Enter a line of text:" << endl;
    string line1;
    getline(cin, line1);
    
    cout << "Enter another: " << endl;
    string line2;
    getline(cin, line2);

    cout << "Result of concatentation: " << endl;
    string concatString = line1 + " " + line2;
    cout << concatString << endl;

    cout << "Copy of concatenated string: " << endl;
    string aCopy;
    aCopy = concatString;
    cout << aCopy << endl;

    cout << "Length of concat string: " << concatString.length() << endl;

    return 0;

}

/*
 ./main
Enter a line of text:
This is the first line of text.
Enter another: 
This is the second line of text.
Result of concatentation: 
This is the first line of text. This is the second line of text.
Copy of concatenated string: 
This is the first line of text. This is the second line of text.
Length of concat string: 64
 
*/
