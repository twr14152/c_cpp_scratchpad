#include <iostream>

int main() {
  bool tag = false;

  if (tag) std::cout << "tag is true" << std::endl;
  else std::cout << "tag is false" << std::endl;

}

/*
 clang++-7 -pthread -std=c++17 -o main main.cpp
 ./main
tag is false
 
*/
