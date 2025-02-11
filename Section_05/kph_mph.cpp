#include <iostream>

float mph;
float kph;

int main() {
	std::cout << "how many kilometers per hour are you going? ";
	std::cin >> kph;
	mph = (kph * 0.6213712);
	std::cout << "you are going " << mph << " miles per hour \n";
	return (0);
}