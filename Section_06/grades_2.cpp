#include <iostream>

int grade;

int main() {
	std::cout << "Please give a numeric letter grade ";
	std::cin >> grade;
	int mod;
	if (grade > 90) {
		mod = grade - 90;
		if (mod > 7) {
			std::cout << "Grade is an A+";
		}
		else if (mod > 3) {
			std::cout << "Grade is an A";
		}
		else {
			std::cout << "Grade is an A-";
		}
	} 
	else if (grade > 80) {
		mod = grade - 80;
		if (mod > 7) {
			std::cout << "Grade is an B+";
		}
		else if (mod > 3) {
			std::cout << "Grade is an B";
		}
		else {
			std::cout << "Grade is an B-";
		}
	}
	else if (grade > 70) {
		mod = grade - 70;
		if (mod > 7) {
			std::cout << "Grade is an C+";
		}
		else if (mod > 3) {
			std::cout << "Grade is an C";
		}
		else {
			std::cout << "Grade is an C-";
		}
	}
	else if (grade > 60) {
		mod = grade - 60;
		if (mod > 7) {
			std::cout << "Grade is an D+";
		}
		else if (mod > 3) {
			std::cout << "Grade is an D";
		}
		else {
			std::cout << "Grade is an D-";
		}
	}
	else {
		mod = grade - 50;
		if (mod > 7) {
			std::cout << "Grade is an D+";
		}
		else if (mod > 3) {
			std::cout << "Grade is an D";
		}
		else {
			std::cout << "Grade is an D-";
		}
	}
	return (0);
}