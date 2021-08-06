#include <iostream>

class Class1
{
private:
  int x;
  double d;
public:
  Class1(int xx, double dd)
    : x{xx}, d{dd}
  {

  }
  void printvalues()
  {
    std::cout << "The value of x is: " << x << ", the value of d is: " << d << std::endl;
  }
  Class1& operator -= (const Class1& rhs)
  {
    this ->x -= rhs.x;
    this ->d -= rhs.d;
    return *this;
  }

  friend Class1 operator-(Class1 lhs, const Class1& rhs)
  {
    lhs -= rhs;
    return lhs;
  }
};

int main()
{
  Class1 myobject{ 3, 3.0 };
  Class1 mysecondobject{1, 1.0 };
  Class1 myresult = myobject - mysecondobject;
  myresult.printvalues();
}

/*
 ./main
The value of x is: 2, the value of d is: 2
 
*/
