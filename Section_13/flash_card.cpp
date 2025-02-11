#include <iostream>

struct single_card {
	std::string question;
	std::string answer;	

};

class flash_card{
	private:
		single_card* list;
		int size;
	public:
		flash_card(single_card list[], int size) {
			this->list = new single_card[size];
			this->size = size;
			for(int i = 0; i < size; i++) {
				this->list[i] = list[i];
			}
		}

		const single_card& get_card(){
			return this->list[this->size - 1];
		}

		void right(){
			this->size--;
		}

		void wrong(){
			single_card* temp_list = new single_card[this->size];
			single_card temp_card = this->list[this->size - 1];

			for(int i = 1; i < this->size; i++) {
				temp_list[i] = this->list[i - 1];
			}
			temp_list[0] = temp_card;
			this->list = temp_list;
		}

		bool done(){ 
			return true;
		}
};

int main() {

	single_card list[5] = {
		{"Who won the election?", "Kamala Harris"},
		{"Who won the election?", "Kamala HarrisA"},
		{"Who won the election?", "Kamala HarrisB"},
		{"Who won the election?", "Kamala HarrisC"},
		{"Who won the election?", "Kamala HarrisD"},

	}; 

	flash_card fc(list, 5);

	const single_card& d = fc.get_card();
	std::cout << d.question << " " << d.answer << "\n";
	fc.right();
	const single_card& c = fc.get_card();
	std::cout << c.question << " " << c.answer << "\n";
	fc.wrong();


}