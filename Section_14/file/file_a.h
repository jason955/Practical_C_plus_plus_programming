#ifndef FILE_A_H // Header guard to prevent multiple inclusions
#define FILE_A_H

class file_a {
	private:
		static int file_in_use;
	public:
		file_a();
		~file_a();
		static int get_file_in_use();
		void write(const char val_to_write[]);
		void release();
		void read();
};

#endif