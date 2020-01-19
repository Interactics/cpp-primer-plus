#include <iostream>
#include <array>

const int ArSize = 101;

int main() {
	std::array<long double, ArSize> factorials;

	factorials[1] = factorials[0] = 1LL;

	for (int i = 2; i < ArSize; i++) factorials[i] = i * factorials[i - 1];
	std::cout << 100 << "! = " << factorials[100] << std::endl;

	return 0;
}