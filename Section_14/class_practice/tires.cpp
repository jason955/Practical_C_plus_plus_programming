#include <iostream>
#include "tires.h"
using namespace std;

Tires::Tires() {
	this->numTires = 0;
}
Tires::Tires(int numTires)
{
    this->numTires = numTires;
}
int Tires::get_num_tires()
{
	return this->numTires;
}