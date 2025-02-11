#include <iostream>
int max = 0;

int main(){
	int numbers[] = {1, 2, 3, 4, 5, 12, 13};
	int length = sizeof(numbers) / sizeof(int);
	for (int i = 0; i < length; i++) {
		if (max < numbers[i]) {
			max = numbers[i];
		}
	}
	std::cout << max;
}