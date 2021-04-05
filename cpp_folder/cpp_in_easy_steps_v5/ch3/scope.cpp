#include <iostream>

using namespace std;

float bodyTempC();
float bodyTempF();

int main()
{
  cout << "centigrade " << bodyTempC() << endl;
  cout << "fahrenheit " << bodyTempF() << endl;
  return 0;
}
//
//Same variable name is used in each func. 
//There is no conflict as they are in local scope of their own function
//
float bodyTempC()
{
  float temperature = 37.0;
  return temperature;
}
float bodyTempF()
{
  float temperature = 98.6;
  return temperature;
}


/*
 ./main
centigrade 37
fahrenheit 98.6
 
*/
