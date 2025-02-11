#include <iostream>


class Checkbook {
	private:
		int size;
		int* book;

	public:

		Checkbook(int* book, int size) {
			this->book = new int[size];
			for (int i = 0; i < size; i++) {
				this->book[i] = book[i];
			}
			this->size = size;
		}

		void setBook(int book[]) {
			book = book;
		}
		int* getBook() {
			return book;
		}

		void setSize(int size) {
			size = size;
		}
		int getSize() {
			return size;
		}
		
		void add_item(int amount) {
			int* temp_book = this->book;
			this->book = new int[this->size + 1];

			for (int i = 0; i < size; i++) {
				this->book[i] = temp_book[i];
			}
			this->size = this->size + 1;
			this->book[this->size - 1] = amount;
		}

		int total() {
			int total = 0;
			for (int i = 0; i < size; i++) {
				total += this->book[i];
			}
			return total;
		}
};

int main() {

	int array[] = {0, 1, 2, 3, 4, 5};

	Checkbook cb(array, 6);

	std::cout << cb.getSize() << '\n';
	std::cout << cb.total() << '\n';

	cb.add_item(6);
	std::cout << cb.getSize() << '\n';
	std::cout << cb.total() << '\n';

	return(0);
}