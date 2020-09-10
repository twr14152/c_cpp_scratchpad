#include <iostream>

using namespace std;

int main() 
{
    int x{1};
    int y{2};
    // ptr creation
    int* p{&x};
    cout << "Ptr p is assigned to x{1}" << endl;
    cout << "This is what the value of p looks like: "<< p << endl;
    cout << "This is how to derefence p: *p : " << *p << endl;
    cout << "This is how you change value of ptr p: p = {&y}; " << endl;
    // ptr p reassigned to &y
    p = &y;
    // to dereference new ptr value
    cout << "This is the value of p: " << *p << endl;
    // to update the pointer value
    *p = 40;
    cout << "The value of p now is: " << *p << endl;
    cout << "The value of y is now: " << y << endl;
    p = nullptr;
    cout << "The value of p pointing to nullptr: " << p << endl;
    // Below caused an error
    //cout << "The value dereferenced *p: " << *p << endl;

}

/*
Ptr p is assigned to x{1}
This is what the value of p looks like: 0x7ffd3346bcac
This is how to derefence p: *p : 1
This is how you change value of ptr p: p = {&y}; 
This is the value of p: 2
The value of p now is: 40
The value of y is now: 40
The value of p pointing to nullptr: 0
bash: line 7: 27475 Segmentation fault      (core dumped) ./a.out
*/
