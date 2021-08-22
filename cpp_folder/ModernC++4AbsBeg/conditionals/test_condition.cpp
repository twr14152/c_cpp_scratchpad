#include <iostream>

int main() {
  bool tag = false;

  if (tag == false ) std::cout << "condition is true" << std::endl;
  else std::cout << "condition is false" << std::endl;

}

/*
 clang++-7 -pthread -std=c++17 -o main main.cpp
 ./main
condition is true
 
*/
