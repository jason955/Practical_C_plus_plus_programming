#include <iostream>
#include <vector>
using namespace std;



int hashs(char s[], int length) {
	int total = 0;
	for (int i = 0; i < length; i++) {
		int val = static_cast<int>(s[i]);
		total += val;
	}
	return total;
} 

int hashes(char* s, int length) {
	int total = 0;
	for (int i = 0; i < length; i++) {
		int val = static_cast<int>(s[i]);
		total += val;
		cout << s[i];
	}
	return total;
} 

int main() {

	char s2[] = {"JasonBarrett"};
	char* s3 = "Jason";
	int l = sizeof(s2) / sizeof(char);
	cout << hashs(s2, l) << "\n";
	cout << hashes(s3, 5);


	return (0);
}