#include <iostream>
using namespace std;

int main()
{
  const double PI = 3.1415926536;
  cout << "6\" circle circumference: " << (PI * 6) << endl;
  enum {R,O,Y,G,B,I,V};
  cout << "R = " << R << endl;
  cout << "G = " << G << endl;
  cout << "I = " << I << endl;
  cout << "V = " << V << endl;

  typedef enum {NEGATIVE, POSITIVE} charge;
  charge neutral = NEGATIVE, live = POSITIVE;
  cout << "Neutral wire: " << neutral << endl;
  cout << "Live wire: " << live << endl;
  return 0;
}

/*
 ./main
6" circle circumference: 18.8496
R = 0
G = 3
I = 5
V = 6
Neutral wire: 0
Live wire: 1
 
*/
