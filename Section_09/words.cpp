#include <iostream>
#include <vector>
std::string input;

/*
* A word is a collection of characters that is follwed or preceeded by a space
* return the number of strings
*/
int main() {
	std::cout << "Write a sentence where words are divided by spaces: ";
	getline(std::cin, input);
	std::string delimeter = " ";
	size_t pos = 0;
	std::vector<std::string> array;
	std::string token;
	while ((pos = input.find(delimeter)) != std::string::npos) {
		token = input.substr(0, pos);
		array.push_back(token);
		input.erase(0, pos + delimeter.length());
	}
	array.push_back(input);
	std::cout << array.size();
	
	return (0);
}