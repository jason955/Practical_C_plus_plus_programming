#include <iostream>
#include <cmath>

float radius;
float volume;

int main() {
	std::cout << "Enter radius of sphere? ";
	std::cin >> radius;
	volume = (4.0/3.0) * 3.14 * pow(radius, 3);
	std::cout << "Volume is " << volume << '\n';
	return (0);
}