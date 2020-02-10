#include <iostream>
#include <new>
#include "header.h"

const int NUM = 2;
chaff buffer[NUM];

int main() {
	chaff* pcha;
	char drossName[50];
	pcha = new (buffer) chaff[NUM];

	for (int i = 0; i < NUM; i++) {
		std::cout << "---chaff " << i << "---" << std::endl;
		setChaff(pcha[i]);
	}

	for (int i = 0; i < NUM; i++) {
		std::cout << "---chaff" << i << "---" <<std::endl;
		displayChaff(pcha[i]);
	}
	return 0;
}