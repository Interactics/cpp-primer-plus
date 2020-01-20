//C++ for Fools
#include <iostream>
#include <cstring>

const int MONTH = 12;

int main() {
	const char* month[MONTH] = {
		"Jan", "Feb", "Mar",
		"Apr", "May", "June",
		"July", "Aug","Sep",
		"Oct", "Nov", "Dec"
	};

	int profit[12];
	int sum = 0;

	for (int i = 0; i < MONTH; i++) {
		std::cout << i + 1 << "월 매출을 입력해주세요." << std::endl;
		std::cin >> profit[i];
		sum = profit[i] + sum;
	}

	std::cout << "매출 결과" << std::endl;
	for (int i = 0; i < MONTH; i++) {
		std::cout << month[i] << ":\t\t" << profit[i] << std::endl;
	}
	std::cout << "총 판매량" << ":\t" << sum << std::endl;
	


	return 0;
}