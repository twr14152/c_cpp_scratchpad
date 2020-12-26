#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    vector<int> vect(3);
    vect[0] = 101;
    vect[1] = 102;
    vect[2] = 103;

    cout << "Number of ints in array: " << vect.size() << endl;
    int newValue = 0;
    cout << "Enter new value to add to vect: "; 
    cin >> newValue;
    vect.push_back(newValue);
    cout << "Number of ints in vect: " << vect.size() << endl;
    cout << "Last element in array: ";
    cout << vect[vect.size() - 1] << endl;
    cout << "The vector now has " << vect.size() << " elements in it" << endl;
    return 0;
}
/*
 ./main
Number of ints in array: 3
Enter new value to add to vect: 200
Number of ints in vect: 4
Last element in array: 200
The vector now has 4 elements in it
 
*/
