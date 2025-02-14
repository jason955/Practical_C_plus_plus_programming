#include <cstdlib>
#include <iostream>
#include "Shelf.h"
#include "stack_c.h"

stack Shelf::s;

Shelf::Shelf(int id)
{
	this->id = id;
}

Shelf::~Shelf()
{
}

int Shelf::getID()
{
	return id;
}

int Shelf::pop()
{	
	return s.pop(this->id);
}
void Shelf::push(int value)
{
	s.push(value, this->id);
}

void Shelf::lock() 
{
	s.lock(this->id);
}
void Shelf::unlock() 
{
	s.unlock(this->id);
}
