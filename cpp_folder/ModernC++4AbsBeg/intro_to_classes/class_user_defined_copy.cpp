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
    Class1(const Class1& rhs) 
      : x {rhs.x}, y {rhs.y}
      {
        std::cout << "User defined copy constructor invoked." << '\n';
      }
      
};
int main()
{
  Class1 cls1(1,4);
  std::cout << "cls1 params: " << cls1.x << " " << cls1.y << std::endl;
  Class1 cls2 = cls1;
  std::cout << "cls2 params: " << cls2.x << " " << cls2.y << std::endl;
  return 0;
}

/*
 clang++-7 -pthread -std=c++17 -o main main.cpp
 ./main
Constructor invoked...
cls1 params: 1 4
User defined copy constructor invoked.
cls2 params: 1 4
Destructor invoked...
Destructor invoked...
 
*/
