#include <iostream>
#include <string>
using namespace std;

int main()
{
 string text;
 string first = "This is an ";
 string second = "example of a string. ";
 string third = "\n";
 char forth[50] = {'T','h','i','s',' ','i','s', ' ', 'a', ' ', 'c','h','a','r',' ','a','r','r','a','y',' ','o','l','d',' ','s','c','h','o','o','l', ' ', 'c', '-','s','t','y','l','e','\0'};

text += (first + second + third + forth);
cout << endl << text << endl;

for (int i = 1; i < sizeof(forth); i++) {
  cout << "This is char number " << i << " " << forth[i] << endl;
}

return 0;
}

/*
 ./main

This is an example of a string. 
This is a char array old school c-style
This is char number 1 h
This is char number 2 i
This is char number 3 s
This is char number 4  
This is char number 5 i
This is char number 6 s
This is char number 7  
This is char number 8 a
This is char number 9  
This is char number 10 c
This is char number 11 h
This is char number 12 a
This is char number 13 r
This is char number 14  
This is char number 15 a
This is char number 16 r
This is char number 17 r
This is char number 18 a
This is char number 19 y
This is char number 20  
This is char number 21 o
This is char number 22 l
This is char number 23 d
This is char number 24  
This is char number 25 s
This is char number 26 c
This is char number 27 h
This is char number 28 o
This is char number 29 o
This is char number 30 l
This is char number 31  
This is char number 32 c
This is char number 33 -
This is char number 34 s
This is char number 35 t
This is char number 36 y
This is char number 37 l
This is char number 38 e
This is char number 39 
This is char number 40 
This is char number 41 
This is char number 42 
This is char number 43 
This is char number 44 
This is char number 45 
This is char number 46 
This is char number 47 
This is char number 48 
This is char number 49 
 
*/
