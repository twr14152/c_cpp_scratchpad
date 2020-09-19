#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int>ages={11, 13, 46, 46};
vector<string>names{"Todd", "Lindsey", "Chuck", "Buck"};


int main()
{
  for (int x : ages) {
    cout <<"[" << x << "]";
  }
  cout << endl;

  /*for (int i = 0; i < names.size(); i++) {
    cout << "[" << names[i] << "]";
  */
  for (string i: names) {
    cout << "[" << i << "]";
  }
  cout << endl;
  return 0;
}

/*
 ./main
[11][13][46][46]
[Todd][Lindsey][Chuck][Buck]
 
*/
