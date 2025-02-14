#include "car.h"
#include "tires.h"

Car::Car(Tires _tires)
{
    tires = _tires;
}
int Car::get_num_tires() 
{
	return tires.get_num_tires();
}