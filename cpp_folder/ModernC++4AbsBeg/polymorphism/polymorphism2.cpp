#include <iostream>

class MyBaseClass
{
  public:
    virtual void dowork()
    {
      std::cout << "Hello from a base class." << '\n';
    }
};
class MyDervicedClass : public MyBaseClass
{
  public:
};

int main()
{
  MyBaseClass* o = new MyDervicedClass;
  o->dowork();
  delete o;
}

/*
 clang++-7 -pthread -std=c++17 -o main main.cp
 ./main
Hello from a base class.
 
*/
