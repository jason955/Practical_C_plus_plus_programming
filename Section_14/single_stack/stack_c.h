#ifndef STACK_C_H // Header guard to prevent multiple inclusions
#define STACK_C_H

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
		int locked;
		int locked_id;
	public:
		//Initialize the Stack
		stack();

		//Push an item on the stack
		void push(const int item, int id);

		//Pop an item from the stack
		int pop(int id);
		void lock(int id);
		void unlock(int id);
};

#endif