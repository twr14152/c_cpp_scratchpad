#include <iostream>

class Class1
{
  public: 
    int x, y;
    Class1(int xx, int yy)
      :x {xx}, y {yy} //member initializer list
    {
      std::cout << "Constructor invoked..." << '\n';
    }
    ~Class1()
    {
      std::cout << "Destructor invoked..." << '\n';
    }
};
int main()
{
  Class1 cls(2,4);
  std::cout << cls.x << " " << cls.y << std::endl;
  return 0;
}

/*
 clang++-7 -pthread -std=c++17 -o main main.cpp
 ./main
Constructor invoked...
2 4
Destructor invoked...
 
*/
