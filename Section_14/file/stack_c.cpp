#include <cstdlib>
#include <iostream>
#include <cassert>

const int STACK_SIZE = 100;

/*
* Stack Class                         
*									  
* Member Functions
* 	init -- initialize the stack
*   push -- put an item on the stack
*   pop  -- remove an item from the stack
*/
class stack {
	private:
		int count;				// Number of items on the stack
		int data[STACK_SIZE];   // The items themselves
	public:
		//Initialize the Stack
		stack();

		//Push an item on the stack
		void push(const int item);

		//Pop an item from the stack
		int pop();
};

/*
* stack::init -- initialize the stack
*/
inline stack::stack()
{
	count = 0;
}

/*
* stack::push -- push an item on the stack
* No overflow checking
* @item: item to put on the stack
*/
inline void stack::push(const int item)
{
	assert((count >= 0) &&
		   (count < sizeof(data) / sizeof(data[0])));
	data[count] = item;
	count++;
}

/*
* stack::pop -- get an item off the stack
* No underflow checking
* @return: the top item from the stack
*/
inline int stack::pop() 
{
	//stack goes down by one
	--count;
	assert((count >= 0) &&
		   (count < sizeof(data) / sizeof(data[0])));
	return data[count];
}

int main()
{
	stack a_stack;

	a_stack.push(1);
	a_stack.push(2);
	a_stack.push(3);

	std::cout << "Exepect a 3 ->" << a_stack.pop() << '\n';
	std::cout << "Exepect a 2 ->" << a_stack.pop() << '\n';
	std::cout << "Exepect a 1 ->" << a_stack.pop() << '\n';

	return(0);

}