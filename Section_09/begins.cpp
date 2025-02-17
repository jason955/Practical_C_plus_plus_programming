#include <iostream>

using namespace std;

string s1 = "Jason";
string s2 = "JasonBarrett";


bool begins(string string1, string string2) {
	size_t pos = string2.find(string1);
	if (pos == 0) {return true;}
	return false;
} 

int main() {
	std::cout << begins(s1, s2) << "\n";
	return (0);
}