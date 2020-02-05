#include <iostream>
#include "header.h"

void setChaff(chaff& cha) {
	char drossName[20];
	int n_slag;

	std::cin >> drossName;
	std::cin >> n_slag;

	strcpy_s(cha.dross, 20, drossName);
	cha.slag = n_slag;
}

void displayChaff(const chaff& cha) {
	std::cout << "dross : " << cha.dross << std::endl;
	std::cout << "slag : " << cha.slag << std::endl;
}