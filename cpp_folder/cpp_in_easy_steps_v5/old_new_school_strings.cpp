#include <iostream>
#include <string>
using namespace std;

int main()
{
 string text;
 string first = "This is an ";
 string second = "example of a string. ";
 string third = "\n";
 char forth[100] = {'T','h','i','s',' ','i','s', ' ', 'a', ' ', 'c','h','a','r',' ','a','r','r','a','y',' ','o','l','d',' ','s','c','h','o','o','l', ' ', 'c', '-','s','t','y','l','e','\0'};

text += (first + second + third + forth);

cout << endl << text << endl;
return 0;
}

/*
 ./main

This is an example of a string. 
This is a char array old school c-style
 
*/
