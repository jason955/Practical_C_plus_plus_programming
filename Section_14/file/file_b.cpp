#include <cstdlib>
#include <iostream>
#include "file_b.h"

int file_b::file_in_use = 0; 


file_b::file_b()
{
}

file_b::~file_b()
{

}

int file_b::get_file_in_use()
{
	return (file_in_use);
}

void file_b::write(const char val_to_write[])
{
	file_in_use = 1;
	std::cout << "Value Written to file from file_b " << val_to_write << "\n";
}

void file_b::release()
{ 
	file_in_use = 0;
	std::cout << "file released" << "\n";
}

void file_b::read()
{ 
	std::cout << "Value read from file to file_b" << "\n";
}
