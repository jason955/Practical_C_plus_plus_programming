#include <iostream>

int value;

int main() {
	std::cout << "Gimme a number ";
	std::cin >> value;
	int flag = 1;
	for (int i = value - 1; i > 1; i--) {
		if (value % i == 0) {
			flag = 0;
			break;
		}
	}
	if (flag) {
		std::cout << "This value is prime";
	}
}