#include <cstdlib>
#include <iostream>
#include <cassert>
#include "stack_c.h"


/*
* stack::init -- initialize the stack
*/
stack::stack()
{
	count = 0;
	locked = 0;
	locked_id = 0;
}

/*
* stack::push -- push an item on the stack
* No overflow checking
* @item: item to put on the stack
*/
void stack::push(const int item, int id)
{
	assert((count >= 0) &&
		   (count < sizeof(data) / sizeof(data[0])));
	if (!locked) 
	{
		data[count] = item;
		count++;		
	}
	else 
	{
		if (id == locked_id) {
			data[count] = item;
			count++;	
			std::cout << "item added to stack for " << id << "\n";
		}
		else {
			std::cout << "Stack is currently locked for " << locked_id << "\n";
		}
	}

}

/*
* stack::pop -- get an item off the stack
* No underflow checking
* @return: the top item from the stack
*/
int stack::pop(int id) 
{
	//stack goes down by one

	if (!locked) 
	{
		--count;
		assert((count >= 0) &&
			   (count < sizeof(data) / sizeof(data[0])));
		return data[count];		
	}
	else 
	{

		if (id == locked_id) {
			--count;
			assert((count >= 0) &&
				   (count < sizeof(data) / sizeof(data[0])));
			return data[count];		
		}
		else {
			std::cout << "Stack is currently locked for " << locked_id << "\n";
			return -1;
		}
	}
}

void stack::lock(int id)
{
	if (!locked) 
	{
		locked = 1;
		locked_id = id;
		std::cout << "Stack locked for " << locked_id << "\n";
	}
	else 
	{
		std::cout << "Stack locked by " << locked_id << "\n";
	}
}


void stack::unlock(int id)
{
	std::cout << "locked " << locked << "\n";
	if (!locked) 
	{
		std::cout << "Stack already unlocked" << "\n";
	}
	else
	{
		if (locked_id == id) {
			locked = 0;
			locked_id = id;
			std::cout << "Stack unlocked " << "\n";
		}
		else 
		{
			std::cout << "You dont own the stack" << "\n";
		}

	}
}