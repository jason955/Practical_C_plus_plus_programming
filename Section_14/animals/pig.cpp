#include <cstdlib>
#include <iostream>
#include "pig.h"

int Pig::number_of_pigs = 0; 

Pig::Pig()
{
	++number_of_pigs;
}

Pig::~Pig()
{
	--number_of_pigs;
}

int Pig::get_number_of_pigs()
{
	return (number_of_pigs);
}

