#include <iostream>
#include <vector>
using namespace std;


int count(int number, vector<int> array, int length) {
	if (length != -1) {
		if (number == array[length]) {
			array.pop_back();
			return count(number, array, length - 1) + 1;
		}
		else {
			array.pop_back();
			return count(number, array, length - 1);
		}
	}
	else {
		return 0;
	}
	
} 

int main() {

	vector<int> array_3 = {0, 1, 0, 3, 0};
	vector<int> array_2 = {2, 1, 0, 3, 0};
	vector<int> array_0 = {1, 1, 3, 3, 4};
	vector<int> array_1 = {0, 1, 5, 3, 5};

	cout << count(0, array_3, array_3.size() - 1);
	cout << count(0, array_2, array_2.size() - 1);
	cout << count(0, array_0, array_0.size() - 1);
	cout << count(0, array_1, array_1.size() - 1);

	return (0);
}