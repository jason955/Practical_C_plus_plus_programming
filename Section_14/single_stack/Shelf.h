#ifndef SHELF_H // Header guard to prevent multiple inclusions
#define SHELF_H
#include "stack_c.h"


class Shelf {
	private:
		static stack s;
		int id;
	public:
		Shelf(int id);
		~Shelf();
		int pop();
		int getID();
		void push(int value);
		void lock();
		void unlock();

};

#endif