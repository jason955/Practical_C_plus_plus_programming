#ifndef CAR_H // Header guard to prevent multiple inclusions
#define CAR_H

#include "tires.h"


class Car
{
private:
    Tires tires;

public:
    Car(Tires);   // Edited. Thanks to Noah for pointing out.
    int get_num_tires();
};
#endif