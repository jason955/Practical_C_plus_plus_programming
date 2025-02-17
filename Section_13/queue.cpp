#include <iostream>

class Queue {
	private:
		int size;
		int* queue;

	public:
		Queue(int* queue, int size) {
			this->queue = new int[size];
			for (int i = 0; i < size; i++) {
				this->queue[i] = queue[i];
			}
			this->size = size;
		}

		void put(int item) {
			int* temp_queue = this->queue;
			this->queue = new int[this->size + 1];
			for (int i = 0; i < this->size; i++) {
				this->queue[i] = temp_queue[i];
			}
			this->queue[this->size] = item;
			this->size = this->size + 1;
		}

		int get() {
			int* temp_queue = this->queue;
			this->queue = new int[this->size - 1];
			for (int i = this->size - 2; i >= 0; i--) {
				this->queue[i] = temp_queue[i + 1];
			}
			// this->size = this->size - 1;	
			return temp_queue[0];		
		}
};

int main() {
	int array[] = {0, 1, 2, 3, 4, 5};

	Queue a_queue(array, 6);
	std::cout << a_queue.get() << '\n';
	std::cout << a_queue.get() << '\n';
	std::cout << a_queue.get() << '\n';

	return(0);
}