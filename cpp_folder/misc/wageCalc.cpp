#include <iostream>
using namespace std;

int main() 
{
	double base_rate,
	       regularHrs = 40.0,
	       overtime_rate,
	       overtimeHrs,
	       regularWages,
	       overtimeWages,
	       total_wages;

	cout << "Enter payrate per hour: " << endl;
	cin >> base_rate;
	cout << "Your base pay is $" << base_rate << endl;
	cout << "Enter hours of over time worked: " << endl;
	cin >> overtimeHrs;
	cout << "You entered " << overtimeHrs << " hours.\n";
	
        overtime_rate = base_rate * 1.5;
	regularWages = base_rate * regularHrs;
	overtimeWages = overtime_rate * overtimeHrs;
	total_wages = regularWages + overtimeWages;
	
	cout << "Your weekly wage for 40hrs is $" << regularWages << endl;
	cout << "Your overtime amount is $" << overtimeWages << endl;
	cout << "You earned $" << total_wages  << " this week.\n";
}









$ ./wageCalc 
Enter payrate per hour: 
21
Your base pay is $21
Enter hours of over time worked: 
8.5
You entered 8.5 hours.
Your weekly wage for 40hrs is $840
Your overtime amount is $267.75
You earned $1107.75 this week.
$ 
