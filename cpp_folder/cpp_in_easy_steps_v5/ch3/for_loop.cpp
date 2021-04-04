#include <iostream>
using namespace std;

int main()
{
  int i, j;
  for (i = 1; i < 4; i++)
  {
    for (j = 1; j < 4; j++)
    {
      cout << "Inner loop iteration: " << j << endl;
    }
    cout << "Outer loop: " << i << endl;
  }

  return 0;
}

/*
 ./main
Inner loop iteration: 1
Inner loop iteration: 2
Inner loop iteration: 3
Outer loop: 1
Inner loop iteration: 1
Inner loop iteration: 2
Inner loop iteration: 3
Outer loop: 2
Inner loop iteration: 1
Inner loop iteration: 2
Inner loop iteration: 3
Outer loop: 3
 
*/
