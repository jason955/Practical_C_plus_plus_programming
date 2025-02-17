#include <iostream>

float amount;
float tax;
float total;

int main () {
	std::cout << "Give me the total price ";
	std::cin >> amount;
	tax = amount * .08;
	total = tax + amount;
	std::cout << total << "\n";
	return (0);
}