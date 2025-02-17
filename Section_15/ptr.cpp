#include <cstdlib>
#include <iostream>
#include <cstring>

int MAX = 10;

int main() {

	//Excercise 1
	int array[MAX];
	int *array_ptr = array;
	for (int index = 0; index < MAX; ++index) {
		*(array_ptr + index) = 0;
	}


	for (int i = 0; i < MAX; ++i) {
		std::cout << "Array val: " << array[i] << "\n";
	}

	char line[] = "Jason Barrett";
	char delim = ' ';
	char *first_ptr;
	char *last_ptr;
	first_ptr = line;
	last_ptr = strchr(line, delim);
	//*(first_ptr + 5) = '\0';
	*last_ptr = '\0';
	++last_ptr;

	std::cout << "First: " << first_ptr << " Last:" << last_ptr << "\n";



	return (0);
}