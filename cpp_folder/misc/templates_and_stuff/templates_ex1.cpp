
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
#include <iostream>

using namespace std;


template<class T>
T Add(T t1, T t2) { return t1 + t2; }

template<class T>
T Threes(T t1) {return t1 + t1 + t1;}

template<class T>
T Mult(T t0, T t1) { return t0 * t1;} 

int main() 
{
	int i{ Add(4, 6) };
	double d{ Add(1.1, 3.4)};
	string s{ Add(string{ "Hello "}, string{ "world" })};
	cout << s << endl;
	cout << d << endl;
	cout <<	i << endl;

	string t {Threes(string {"word "})};
	cout << t << endl;

	int a{ Mult(23, 3487)};
	double b{ Mult(24.23, 42.12)};
 
    cout << a << endl;
	cout << b << endl;

	vector<int> integers{ 3, 7, 11, 23, 45, 67, 10 };
	vector<double> doubles{ 1.1, 5.4, 77.2, -1.2, 3.5 };

	int ilength = integers.size();
	int dlength = doubles.size();
        
	cout << "length of integers vector " << ilength << endl;
	cout << "length of doubles vector " << dlength << endl;

	integers.push_back(-3);
	integers.push_back(22);
        
	ilength = integers.size();
	integers[0]++;
	auto third = integers[2];
	cout << "length of integers vector " << ilength << endl;
	cout << third << endl;
	// combining things learned
	for (int i = 0; i < integers.size(); i++) {
	    cout << integers[i] << " ";
	    if (integers[i] == 23){
	        cout << "(Jordans Number)" << " ";
	    }
	}
	cout << endl;
	cout << "Vector intergers without manipulating it: " << endl;
	for (int i = 0; i < integers.size(); i++) {
	    cout << integers[i] << " ";
	}    
	cout << "\nThe length of the vector is " << integers.size() << endl;
	//find the sum of all the integers in vector
    int total {0};
    for (unsigned int i = 0; i < integers.size(); i++) {
        total += integers[i];
    }
    cout << "Total = " << total << endl;
    
    // Range for loop
    int total2 {0};
    for (auto elem : integers) {
        total2 += elem;
    }
    cout << "Total2 = " << total2 << endl;
    

	return 0;
}

/*
<cropped some warnings out>
Hello world
4.5
10
word word word 
80201
1020.57
length of integers vector 7
length of doubles vector 5
length of integers vector 9
11
4 7 11 23 (Jordans Number) 45 67 10 -3 22 
Vector intergers without manipulating it: 
4 7 11 23 45 67 10 -3 22 
The length of the vector is 9
Total = 186
Total2 = 186
*/
