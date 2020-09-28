#include <iostream>
#include <string>
using namespace std;

int main()
{
 string text = "I do like Ohio State games";
 cout << "Original: " << text << endl;
 text.insert(26, " and drinking beer.");
 cout << "Inserted: " << text << endl;
 text.erase(2,3);
 cout << "Erased: " << text << endl;
 cout << "Copied: " << text.substr(7, 10) << endl;
 cout << "Last character: " << text.at(text.size()-1) << endl;

  return 0;
}
/*
 
./main
Original: I do like Ohio State games
Inserted: I do like Ohio State games and drinking beer.
Erased: I like Ohio State games and drinking beer.
Copied: Ohio State
Last character: .
 
*/
