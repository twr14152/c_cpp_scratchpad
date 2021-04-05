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
