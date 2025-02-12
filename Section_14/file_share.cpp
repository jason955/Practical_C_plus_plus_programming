#include <iostream>
#include "file_a.h"
#include "file_b.h"


int file_is_busy() 
{
	std::cout << "A File " << file_a::get_file_in_use() << "\n";
	std::cout << "B File " << file_b::get_file_in_use() << "\n";
	return file_a::get_file_in_use() || file_b::get_file_in_use();
}

/*
* Compile this: g++ file_share.cpp file_a.cpp file_b.cpp -o file_share
*/
int main() {


	file_a a;
	file_a aa;

	file_b b;

	a.read();
	b.read();
	a.write("Jason");
	int f_busy = file_is_busy();

	if (f_busy) {
		std::cout << "File is busy" << "\n";
	}
	else {
		std::cout << "File is not busy" << "\n";		
	}

	a.release();
	f_busy = file_is_busy();

	if (f_busy) {
		std::cout << "File is busy" << "\n";
	}
	else {
		std::cout << "File is not busy" << "\n";		
	}

	aa.write("JasonB");

	f_busy = file_is_busy();

	if (f_busy) {
		std::cout << "File is busy" << "\n";
	}
	else {
		std::cout << "File is not busy" << "\n";		
	}
}