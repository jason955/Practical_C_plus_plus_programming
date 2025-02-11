#include <iostream>

int i_minutes;
int hours;
int minutes;

int main() {
	std::cout << "how many minutes?";
	std::cin >> i_minutes;
	hours = i_minutes / 60;
	minutes = i_minutes - (hours * 60);
	std::cout << "Number of hours is " << hours << " number of minutes is " << minutes << '\n';
	return (0);
}