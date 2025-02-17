#include <iostream>

float hours_worked;
int hourly_wage = 15;
float pay;

int main() {
	std::cout << "How many hours did you work? ";
	std::cin >> hours_worked;
	if (hours_worked > 40)  {
		float ot = (hours_worked - 40) * 1.5;
		hours_worked = ot + 40;
	}	
	pay = hours_worked * hourly_wage;
	std::cout << "pay is " << pay;
	return (0);
}