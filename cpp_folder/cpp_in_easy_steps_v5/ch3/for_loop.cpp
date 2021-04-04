#include <iostream>
using namespace std;

int main()
{
  int i, j;
  for (i = 1; i < 4; i++)
  {
    cout << "Outer loop start: " << i << endl;
    for (j = 1; j < 4; j++)
    {
      cout << "Inner loop iteration: " << j << endl;
    }
    cout << "Outer loop end: " << i << endl;
    cout << "=====================" << endl;
  }

  return 0;
}

/*
 ./main
Outer loop start: 1
Inner loop iteration: 1
Inner loop iteration: 2
Inner loop iteration: 3
Outer loop end: 1
=====================
Outer loop start: 2
Inner loop iteration: 1
Inner loop iteration: 2
Inner loop iteration: 3
Outer loop end: 2
=====================
Outer loop start: 3
Inner loop iteration: 1
Inner loop iteration: 2
Inner loop iteration: 3
Outer loop end: 3
=====================
 
*/
