#include <cstdlib>
#include <iostream>
#include "dog.h"

int Dog::number_of_dogs = 0; 

Dog::Dog()
{
	++number_of_dogs;
}

Dog::~Dog()
{
	--number_of_dogs;
}

int Dog::get_number_of_dogs()
{
	return (number_of_dogs);
}
