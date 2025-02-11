#include <iostream>

class Parity {
	private:
		int element;

	public:
		Parity(int element) {
			this->element = element;
		}
		
		int getElement() {
			return element;
		}
		
		void setElement(int e) {
			element = e;
		}

		void put() {
			element++;
		}

		bool test() {
			int p = element % 2;

			if (p) {
				return false;
			}
			else {
				return true;
			}
		}
};

int main() {
	
	Parity p_test(0);
	p_test.put();
	p_test.put();
	p_test.put();
	p_test.put();
	p_test.put();
	std::cout << p_test.getElement();
	std::cout << p_test.test();
	return(0);
}