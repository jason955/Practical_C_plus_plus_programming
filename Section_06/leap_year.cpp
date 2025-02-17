#include <iostream>

int year;

int main() {
	std::cout << "Gimme a  year ";
	std::cin >> year;

	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				std::cout << "This is a leap year";
			}
			else {
				std::cout << "This is not a leap year";
			}
		}
		else {
			std::cout << "This is a leap year";
		}
	}
	else {
		std::cout << "Not a leap year";
	}

	return (0);
}