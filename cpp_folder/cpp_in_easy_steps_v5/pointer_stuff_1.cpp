#include <iostream>
using namespace std;

void current_value(int*);
void five_times_current_value(int*);

int main()
{
  int a = 1, b=10;
  int* aPtr = &a;
  int* bPtr = &b;

  cout << "Addresses of pointers...(&_Ptr)" << endl;
  cout << "aPtr: " << &aPtr << endl;
  cout << "bPtr: " << &bPtr << endl << endl;

  cout << "Values in pointers...(_Ptr)" << endl;
  cout << "aPtr: " << aPtr << endl; 
  cout << "bPtr: " << bPtr << endl << endl;

  cout << "Values in addresses pointed to ...(*_Ptr)" << endl;
  cout << "a: " << *aPtr << endl;
  cout << "b: " << *bPtr << endl << endl;

  cout << "Pointer arithmatic........" << endl;

  int nums[] = {0, 1, 2, 3, 4, 5};

  cout << "The value of a ptr assigned to an array assumes value of first element in the array" << endl;

  int* Ptr = nums;

  cout << "Ptr assumes the value of 0 in nums upon assignment" << endl;
  cout << "Ptr value: " << Ptr << "Ptr dereferenced (*Ptr): " << *Ptr << endl;
  cout << "Now add one to Ptr by Ptr++ value should be 1" << endl;
  Ptr++;
  cout << "Ptr value: " << Ptr << "Ptr dereferenced (*Ptr): " << *Ptr << endl;
  cout << "Now add 2 more to Ptr (Ptr+=2) the value should be 3" << endl;
  Ptr+=2;
  cout << "Ptr value: " << Ptr << "Ptr dereferenced (*Ptr): " << *Ptr << endl;


  cout << "Passing Ptr to a function......" << endl;

  int current_num = 10;
  int* cPtr = &current_num;
  current_value(cPtr);
  five_times_current_value(cPtr);
  
  return 0;
}

void current_value(int* c)
{
  cout << "The current_value(cPtr) is: " << *c << endl;
}

void five_times_current_value(int* c)
{
  *c*=5;
  cout << "five_times_current_value(cPtr) is: " << *c << endl;
}

/*
 ./main
Addresses of pointers...(&_Ptr)
aPtr: 0x7ffc05d21ca8
bPtr: 0x7ffc05d21ca0

Values in pointers...(_Ptr)
aPtr: 0x7ffc05d21cb8
bPtr: 0x7ffc05d21cb4

Values in addresses pointed to ...(*_Ptr)
a: 1
b: 10

Pointer arithmatic........
The value of a ptr assigned to an array assumes value of first element in the array
Ptr assumes the value of 0 in nums upon assignment
Ptr value: 0x7ffc05d21c80Ptr dereferenced (*Ptr): 0
Now add one to Ptr by Ptr++ value should be 1
Ptr value: 0x7ffc05d21c84Ptr dereferenced (*Ptr): 1
Now add 2 more to Ptr (Ptr+=2) the value should be 3
Ptr value: 0x7ffc05d21c8cPtr dereferenced (*Ptr): 3
Passing Ptr to a function......
The current_value(cPtr) is: 10
five_times_current_value(cPtr) is: 50
 
*/
