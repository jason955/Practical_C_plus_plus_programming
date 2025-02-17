#include <cstdlib>
#include <iostream>
#include "horse.h"

int Horse::number_of_horses = 0; 

Horse::Horse()
{
	++number_of_horses;
}

Horse::~Horse()
{
	--number_of_horses;
}

int Horse::get_number_of_horses()
{
	return (number_of_horses);
}
