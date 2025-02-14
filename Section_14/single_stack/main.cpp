#include <iostream>
#include "Shelf.h"
#include "stack_c.h"
/*
* g++ main.cpp Shelf.cpp stack_c.cpp -o shelf
*/
int main() {
	std::cout << "Shelf" << "\n";
	Shelf shelf(1);
	Shelf shelf2(2);

	shelf.lock();
	shelf.push(1);
	shelf.push(2);
	shelf2.push(3);
	shelf2.unlock();

	std::cout << shelf.pop() << "\n";
	std::cout << shelf2.pop() << "\n";
	shelf.unlock();
	std::cout << shelf2.pop() << "\n";

}