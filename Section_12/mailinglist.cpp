#include <iostream>
#include <cstring>
struct mailing {
	char name[60];
	char address1[60];
	char address2[60];
	char city[40];
	char state[3];
	long int zip;
};

int main() {
	struct mailing list[2] = {
	  {"Jason", "731 S Curley", "NA", "Baltimore", "MD", 21224},
  	  {"Carlye", "731 S Curley", "NA", "Baltimore", "MD", 21224}

	};
	strcpy(list[0].name, "JASON");
	// list[0].address1 = "731 S Curley St";
	// list[0].address2 = "N/A";
	// list[0].city = "Baltimore";
	// list[0].state = "MD";
	// list[0].zip = 21224;
	// list[1].name = "Carlye";
	// list[1].address1 = "732 S Curley St";
	// list[1].address2 = "N/A";
	// list[1].city = "Baltimore";
	// list[1].state = "MD";
	// list[1].zip = 21224;

	for (int i = 0; i < 2; i++) {
		char* city = list[i].city;
		int cmp = strcmp(city, "Baltimore");
		if (!cmp) {
			std::cout << list[i].name;
		}
	}
}