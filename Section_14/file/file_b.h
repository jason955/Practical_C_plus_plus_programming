#ifndef FILE_B_H // Header guard to prevent multiple inclusions
#define FILE_B_H

class file_b {
	private:
		static int file_in_use;
	public:
		file_b(); 
		~file_b();
		static int get_file_in_use();
		void write(const char val_to_write[]);
		void release();
		void read();
};

#endif