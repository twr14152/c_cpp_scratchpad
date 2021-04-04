#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int>vec(10);
  int i = 0;
  while (i < vec.size())
  {
    i++;
    vec[i -1]=i;
    if (i == 3) 
    {
      cout << "|skipped";
      continue;
    }
    else if (i == 8)
    {
      cout << "|done" << endl;
      break;
    }
    cout << "|" << vec.at(i-1);

  }
  return 0;
}

/*
./main
|1|2|skipped|4|5|6|7|done
 
*/
