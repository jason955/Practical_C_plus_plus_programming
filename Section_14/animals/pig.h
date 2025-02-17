#ifndef PIG_H // Header guard to prevent multiple inclusions
#define PIG_H

class Pig {
	private:
		static int number_of_pigs;
	public:
		Pig(); 
		~Pig();
		static int get_number_of_pigs();

};

#endif