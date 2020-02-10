#include <iostream>

int main() {
	int firstInt, secondInt;
	int sum = 0;

	std::cout << "두 수를 입력해주세요. (작은 수 먼저)" << std::endl;
	std::cin >> firstInt >> secondInt;


	for (int number = firstInt; number <= secondInt; number++) sum = sum + number;

	std::cout << "두 수 사이의 숫자의 합은 " << sum << "입니다. " << std::endl;

	return 0;
}