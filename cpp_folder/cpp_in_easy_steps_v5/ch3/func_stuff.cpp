#include <iostream>
using namespace std;

//func declarations
int compFactorial(int, int);
int factorial(int);

int main()
{
  compFactorial(1,8);
  return 0;
}

int compFactorial(int num, int max)
{
  cout << "Factorial of " << num << " : ";
  cout << factorial(num) << endl;
  num++;
  if (num > max) return 0;
  else compFactorial(num, max);
}

int factorial(int n)
{
  int result;
  if (n==1) result = 1;
  else result = (factorial(n-1)*n);
  return result;
}

/*
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ ./func_stuff 
Factorial of 1 : 1
Factorial of 2 : 2
Factorial of 3 : 6
Factorial of 4 : 24
Factorial of 5 : 120
Factorial of 6 : 720
Factorial of 7 : 5040
Factorial of 8 : 40320
pi@RaspPi4:~/Coding/CPP_folder/in_easy_steps $ 
*/
