#include <iostream>

int amt;
int quarters;
int dimes;
int nickles;
int pennies;

int main() {
	std::cout << "Enter amt ";
	std::cin >> amt;

	quarters = amt / 25;
	dimes = (amt - (quarters * 25)) / 10;
	nickles = (amt - (quarters * 25) - (dimes * 10)) / 5;
	pennies = (amt - (quarters * 25) - (dimes * 10) - (nickles *5));

	std::cout << "Quarters " << quarters << " dimes " << dimes << " nickles " << nickles << " pennies " << pennies << '\n';
	return (0);
}