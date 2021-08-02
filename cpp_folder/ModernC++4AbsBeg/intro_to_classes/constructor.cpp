#include <iostream>

class Class1
{
  public: 
    Class1() //constructor same name as class
    {
      std::cout << "Constructor invoked..." << '\n';
    }
    ~Class1() //destructor ~same name as class
    {
      std::cout << "Destructor invoked..." << '\n';
    }
};
int main()
{
  Class1 firstclass;
  return 0;
}

/*
 clang++-7 -pthread -std=c++17 -o main main.cpp
 ./main
Constructor invoked...
Destructor invoked...
 
*/
