#include <iostream>
#include <cmath>

int value;


int main() {

	std::cout << "Gimme a number ";
	std::cin >> value;
	std::string numbers[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

	int size = sizeof(numbers) / sizeof(numbers[0]);
	int count = 0;
	int tmp_value = value;
	while (tmp_value != 0) {
        tmp_value /= 10;
        ++count;
    }
    int array_hold[count];

    int count_2 = 0;
    while (value != 0) {
    	int digit = value % 10;
    	array_hold[count_2] = digit;
    	value /= 10;
    	++count_2;
    }
    for (int i = count - 1; i >= 0; i--) {
    	std::cout << numbers[array_hold[i]] << " ";
    }

	return(0);
}