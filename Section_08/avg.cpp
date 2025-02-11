#include <iostream>

int n;
int total = 0;

int main() {
	
	std::cout << "How many numbers ";
	std::cin >> n;

	for (int i = 1; i <= n; i++) {
		int value;
		std::cout << "Number " << i << ": ";
		std::cin >> value;
		total = total + value;
	}
	float avg = float(total) / n;
	std::cout << "Average " << avg;

	return(0);
}