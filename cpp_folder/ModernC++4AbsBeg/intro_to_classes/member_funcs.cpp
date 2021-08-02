#include<iostream>

class Class1
{
  public:
  int v;
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

/*
 ./main
The value of data member v is: 9366
 
*/
