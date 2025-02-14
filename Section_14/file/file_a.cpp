#include <cstdlib>
#include <iostream>
#include "file_a.h"

int file_a::file_in_use = 0; 

file_a::file_a()
{

}

file_a::~file_a()
{

}

int file_a::get_file_in_use()
{
	return (file_in_use);
}

void file_a::write(const char val_to_write[])
{
	file_in_use = 1;
	std::cout << "Value Written to file from file_a " << val_to_write << "\n";
}

void file_a::release()
{ 
	file_in_use = 0;
	std::cout << "file released" << "\n";
}

void file_a::read()
{ 
	std::cout << "Value read from file to file_a" << "\n";
}