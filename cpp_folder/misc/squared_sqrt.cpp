#include <iostream>
using namespace std;

int square(int x);
float sqrt(int z, int i);

int main()
{
 int z {0};
 int s {0};
 for (int i=1; i <= 15; i++) 
 {
   z = square(i);
   s = sqrt(z,i);
   cout << i << " squared is " << z << " sqrt is " << s << "\n";
 }
}
int square(int x) 
{
  return x * x;
}

float sqrt(int z, int i)
{
  return (float)(z)/i;
}  

/*
 clang++-7 -pthread -std=c++17 -o main main.cpp
 ./main
1 squared is 1 sqrt is 1
2 squared is 4 sqrt is 2
3 squared is 9 sqrt is 3
4 squared is 16 sqrt is 4
5 squared is 25 sqrt is 5
6 squared is 36 sqrt is 6
7 squared is 49 sqrt is 7
8 squared is 64 sqrt is 8
9 squared is 81 sqrt is 9
10 squared is 100 sqrt is 10
11 squared is 121 sqrt is 11
12 squared is 144 sqrt is 12
13 squared is 169 sqrt is 13
14 squared is 196 sqrt is 14
15 squared is 225 sqrt is 15
 


/*
#include <iostream>
using namespace std;

int square(int x);
float sqrt(int z, int i);

int main()
{
 int i {0};
 int z {0};
 int s {0};
 while (i < 15) {
   z = square(i);
   s = sqrt(z,i);
   cout << i << " squared is " << z << " sqrt is " << s << "\n";
   i++;
 }
}
int square(int x) 
{
  return x * x;
}

float sqrt(int z, int i)
{
  return (float)(z)/i;
} 
/*
/*
 ./main
0 squared is 0 sqrt is -2147483648
1 squared is 1 sqrt is 1
2 squared is 4 sqrt is 2
3 squared is 9 sqrt is 3
4 squared is 16 sqrt is 4
5 squared is 25 sqrt is 5
6 squared is 36 sqrt is 6
7 squared is 49 sqrt is 7
8 squared is 64 sqrt is 8
9 squared is 81 sqrt is 9
10 squared is 100 sqrt is 10
11 squared is 121 sqrt is 11
12 squared is 144 sqrt is 12
13 squared is 169 sqrt is 13
14 squared is 196 sqrt is 14
15 squared is 225 sqrt is 15
 
*/
