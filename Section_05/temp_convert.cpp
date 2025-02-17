#include <iostream>


float celcius;
float farenheit;

int main() {
	std::cout << " Enter temperature in Celcius? ";
	std::cin >> celcius;
	farenheit = (9.0/5.0 * celcius) + 32;
	std::cout << "The temperature in farenheit is " << farenheit << '\n';
	return (0);
}