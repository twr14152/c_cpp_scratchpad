#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() 
{
  vector<string> v = {
    "config t",
    " ",
    "router ospf 1",
    };
  v.push_back(" network 10.0.0.0 0.0.0.255 area 0");
  v.push_back(" passive-interface gig0/0.1");
  for (auto el : v)
  {
    cout << el << endl;
  }
  return 0;
}

/*
 ./main
config t
 
router ospf 1
 network 10.0.0.0 0.0.0.255 area 0
 passive-interface gig0/0.1
 
*/
