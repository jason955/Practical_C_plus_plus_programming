#ifndef DOG_H // Header guard to prevent multiple inclusions
#define DOG_H

class Dog {
	private:
		static int number_of_dogs;
	public:
		Dog(); 
		~Dog();
		static int get_number_of_dogs();

};

#endif