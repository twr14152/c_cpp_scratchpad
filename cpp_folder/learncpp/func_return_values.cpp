// function return values

#include <iostream>

double hoursWorked()
{
	std::cout << "How many hours did you work?:\n";
	double hours{};
	std::cin >> hours;
	return hours;
}
double pay_rate()
{
	std::cout << "Whats your pay rate?:\n";
	double payrate{};
	std::cin >> payrate;
	return payrate;
}

int main()
{
	std::cout << "Bullshit paycheck calculator (Not including overtime at this point)\n";
	double hours_worked{hoursWorked()};
	double pay_per_hour{pay_rate()};
	std::cout << "Pre-taxed dollars:  " << hours_worked * pay_per_hour << '\n';
	std::cout << "Post-taxed dollars in Ohio: " << (hours_worked * pay_per_hour) * .78 << '\n'; // Google estimated take home salary is 78% of your paycheck
	return 0;
}
