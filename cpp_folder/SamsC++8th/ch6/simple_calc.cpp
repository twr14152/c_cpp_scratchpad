#include <iostream>

using namespace std;

int main() 
{
    int num1 = 0;
    int num2 = 0;
    char choice;

    cout << "Enter two integers: " << endl;
    cout << "> "; 
    cin >> num1;
    cout << "> ";
    cin >> num2;
    cout << "What do you want to do with " << num1 << " and " << num2 << endl;
    cout << "'+' = add '*' = multiply '-' = subtract '/' = divide '%' = modulo:\n" << endl;
    cout << "> ";

    cin >> choice;
    if (choice == '*') {
        cout << num1 << "*" << num2 << "= " << num1 * num2 << endl;
    } else if ( choice == '/') { 
        cout << num1 << " / " << num2 << " = " << num1/(double)num2 << endl;
    } else if ( choice == '+') {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    } else if ( choice == '-') {
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    } else if ( choice == '%') {
        cout << num1 << " % " << num2 << " = " << num1 % num2 << endl; 
    }
    return 0;
}
/*
 ./main
Enter two integers: 
> 5
> 6
What do you want to do with 5 and 6
'+' = add '*' = multiply '-' = subtract '/' = divide '%' = modulo:

> +
5 + 6 = 11
 ./main
Enter two integers: 
> 5 
> 6
What do you want to do with 5 and 6
'+' = add '*' = multiply '-' = subtract '/' = divide '%' = modulo:

> *
5*6= 30
 ./main
Enter two integers: 
> 5
> 6
What do you want to do with 5 and 6
'+' = add '*' = multiply '-' = subtract '/' = divide '%' = modulo:

> -
5 - 6 = -1
 ./main
Enter two integers: 
> 5
> 6
What do you want to do with 5 and 6
'+' = add '*' = multiply '-' = subtract '/' = divide '%' = modulo:

> /
5 / 6 = 0.833333
 ./main 
Enter two integers: 
> 5 
> 6
What do you want to do with 5 and 6
'+' = add '*' = multiply '-' = subtract '/' = divide '%' = modulo:

> %
5 % 6 = 5
 
*/
