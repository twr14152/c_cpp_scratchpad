#include <iostream>

class Class1
{
  private:
    int x;
    int* p;
  public: 
    Class1(int xx, int pp)
      : x{ xx }, p{ new int{ pp } } //member initializer list
    {
      std::cout << "Constructor invoked..." << '\n';
    }
    ~Class1()
    {
      std::cout << "Destructor invoked..." << '\n';
    }
    Class1(const Class1& rhs) 
      : x{ rhs.x }, p{ new int  {*rhs.p} }
      {
        std::cout << "User defined copy constructor invoked." << '\n';
        std::cout << "Copy Class parameters: " << x << " " << *p << '\n';
      }
      
};

int main()
{
  Class1 cls1{1, 2};
  //std::cout << "cls1 params: " << cls1.x << " " << cls1.p << std::endl;
  Class1 cls2 = cls1;
  return 0;
}

/*
 clang++-7 -pthread -std=c++17 -o main main.cpp
 ./main
Constructor invoked...
User defined copy constructor invoked.
Copy Class parameters: 1 2
Destructor invoked...
Destructor invoked...
 
*/
