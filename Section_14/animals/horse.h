#ifndef HORSE_H // Header guard to prevent multiple inclusions
#define HORSE_H

class Horse {
	private:
		static int number_of_horses;
	public:
		Horse(); 
		~Horse();
		static int get_number_of_horses();

};

#endif