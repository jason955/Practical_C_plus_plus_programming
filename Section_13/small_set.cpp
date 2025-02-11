#include <iostream>

class small_set {
	private:
		int* set_v;
		int size;
	public:
		small_set(int* set_v, int size){
			this->set_v = new int[32];
			this->size = size;
			for(int i = 0; i < size; i++) {
				this->set_v[i] = set_v[i];
			}
		}

		//set an element in the set
		void set(int item) {
			int in_set = 0;
			for(int i = 0; i < this->size; i++) {
				if (this->set_v[i] == item) {
					in_set = 1;
				}
			}

			if(!in_set && size < 32) {
				this->set_v[size] = item;
				this->size++;
			}
			std::cout << this->size;
		}

		//remove item from the set
		void clear(int item) {
			for(int i = 0; i < this->size; i++) {
				if (this->set_v[i] == item) {
					this->set_v[i] = -1;
					this->size--;
				}
			}
		}

		//test whether or not the item is in the list
		int test(int item) {
			int in_set = 0;
			for(int i = 0; i < this->size; i++) {
				if (this->set_v[i] == item) {
					in_set = 1;
				}
				std::cout << this->set_v[i];
			}
			return in_set;
		}
};

int main() {
	int elements[] = {3, 5, 7};
	small_set s(elements, 3);

	std::cout << s.test(3) << '\n';
	std::cout << s.test(2) << '\n';
	s.set(9);
	//s.clear(5);
	std::cout << s.test(9) << '\n';
	std::cout << s.test(5) << '\n';
	s.set(9);


}