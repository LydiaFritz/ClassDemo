#include <iostream>
#include <ctime>
#include "Die.h"

int main() {
	srand(time(NULL));
	Die d1(6), d2(6);
	std::cout << d1.getValue() << std::endl;
	std::cout << "rolling the die...";
	d1.rollDice();
	d2.rollDice();
	std::cout << d1.getValue() << "," << d2.getValue() << std::endl;

	return 0;
}