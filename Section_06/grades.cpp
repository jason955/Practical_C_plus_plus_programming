#include <iostream>

int grade;

int main() {
	std::cout << "Please give a numeric letter grade ";
	std::cin >> grade;

	if (grade > 90) {
		std::cout << "Grade is an A \n";
	} 
	else if (grade > 80) {
		std::cout << "Grade is a B \n";
	}
	else if (grade > 70) {
		std::cout << "Grade is a C \n";
	}
	else if (grade > 60) {
		std::cout << "Grade is a D \n";
	}
	else {
		std::cout << "Grade is a F \n";
	}
	return (0);
}