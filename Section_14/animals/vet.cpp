#include <iostream>
#include "horse.h"
#include "dog.h"
#include "pig.h"



int how_many_animals() 
{
	return Dog::get_number_of_dogs() + Pig::get_number_of_pigs() + Horse::get_number_of_horses();

}

/*
* Compile this: g++ vet.cpp horse.cpp dog.cpp pig.cpp -o vet
*/
int main() {
	Pig p;
	Pig pp;
	Pig ppp;

	Horse h;
	Horse hh;

	Dog d;

	std::cout << "Number of animals " << how_many_animals() << "\n";
}