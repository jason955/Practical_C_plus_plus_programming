#include <iostream>

char letter;
int flag = 0;

int main() {
	
	std::cout << "What is your character ";
	std::cin >> letter;

	char vowels[] = "aeiou";
	int size = sizeof(vowels) / sizeof(char);
	
	for (int i = 0; i < size; i++) {
		if (letter == vowels[i]) {
			flag = 1;
		}
	}

	if (flag) {
		std::cout << "The letter " << letter << " is a vowel";
	}
	return (0);
}