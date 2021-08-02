#include<iostream>

class Class1
{
  private:
    int v {3};
  public:
  void print_v()
  {
    std::cout << "The value of data member v is: " << v << '\n';
  }
};
int main()
{
  Class1 a;
  a.print_v();
}

/*
 clang++-7 -pthread -std=c++17 -o main main.cpp
 ./main
The value of data member v is: 3
 
*/

//------------------------------------------------
/*
#include<iostream>

class Class1
{
  private:
    int v {3};
  public:
  void print_v()
  {
    std::cout << "The value of data member v is: " << v << '\n';
  }
};
int main()
{
  Class1 a;
  a.v = 9366;
  a.print_v();
}
*/
/*
 clang++-7 -pthread -std=c++17 -o main main.cpp
main.cpp:16:5: error: 'v' is a private member of 'Class1'
  a.v = 9366;
    ^
main.cpp:6:9: note: declared private here
    int v {3};
        ^
1 error generated.
exit status 1
 
*/


