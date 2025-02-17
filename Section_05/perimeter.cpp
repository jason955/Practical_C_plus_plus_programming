#include <iostream>

int perimeter;
int height;
int width;

int main() {
	std::cout << "Tell me the width and height of your rectangle";
	std::cin >> height >> width;
	perimeter = 2 * (height + width);
	std::cout << "Perimeter is " << perimeter << '\n';
	return (0);
}