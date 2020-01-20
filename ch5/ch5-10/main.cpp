#include <iostream>

int main() {
	int star;

	std::cout << "출력할 행 수를 입력하십시오: ";
	std::cin >> star;

	for (int i = 0; i < star; i++) {
		for (int j = 0; j < star - i - 1; j++) std::cout << ".";
		for (int j = star - i - 1; j < star; j++) std::cout << "*";
		std::cout << std::endl;
	}

	return 0;
}