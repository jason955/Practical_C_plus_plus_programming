#ifndef TIRES_H // Header guard to prevent multiple inclusions
#define TIRES_H

class Tires
{
private:
    int numTires;

public:
	Tires();
    Tires(int numTires);
    int get_num_tires();
};

#endif