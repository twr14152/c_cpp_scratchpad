#include <iostream>
#include <string>

class Class1
{
  private:
    double d;
    std::string s;
  public:
    Class1(double dd, std::string ss)
      : d{dd}, s{ss}
    {}
    Class1(Class1&& otherobject)
      : d{ std::move(otherobject.d)}, s{ std::move(otherobject.s)}
      {
        std::cout << "Move constructor invoked." << '\n';
      }
      void printdata()
      {
        std::cout << "The value of double is: " << d << ", the value of string is: " << s << '\n';
      }
}; 
int main()
{
  Class1 o1 { 3.14, "This was in object 1"};
  Class1 o2 = std::move(o1);
  o2.printdata();
}
/*
toddriemenschneider@Todds-MBP-2 classes % ./overloading_arithmetic      
Move constructor invoked.
The value of double is: 3.14, the value of string is: This was in object 1
toddriemenschneider@Todds-MBP-2 classes % 
*/
