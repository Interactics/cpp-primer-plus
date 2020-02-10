#include <iostream>
#include "golf.h"

int main() {
	golf ann;
	setgolf(ann, "Ann Birdfree", 24);

	golf person;

	while (setgolf(person)) {
		showgolf(person);
		handicap(person, 99);
		showgolf(person);
	}

	std::cout << "종료" << std::endl;
	return 0;
}