#include <iostream>
#include "car.h"
#include "tires.h"

// g++ car.cpp tires.cpp main.cpp -o car_go
int main()
{
	Tires tires(4);
	Tires tires2(3);
	Car car(tires2);
	std::cout << "Tires " << car.get_num_tires();
	return (0);
}