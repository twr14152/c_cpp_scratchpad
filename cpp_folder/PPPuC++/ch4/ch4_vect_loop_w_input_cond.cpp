#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int>nums;
  for(int num; cin>>num;) {
    nums.push_back(num);
    if (num == 666) {
      for (int x : nums) cout << "[" << x << "]"; 
      break;
    }
}
  cout << endl;
  return 0;
}
/*
 ./main
1
3
45
874
564541
2
666
[1][3][45][874][564541][2][666]
 
*/
