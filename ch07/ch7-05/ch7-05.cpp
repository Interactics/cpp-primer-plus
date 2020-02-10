#include <iostream>

int fact(int n);

int main() {
	int num;

	std::cout << "숫자를 입력하세요(숫자가 아니거나 음수이면 종료) : ";

	while (std::cin >> num) {
		if (num < 0) break;

		std::cout <<"의 팩토리얼 : " << fact(num) << std::endl;
	}

	std::cout << "종료" << std::endl;

	return 0;
}

int fact(int n) {
	if (n == 0) return 1;
	else return n * fact(n - 1);
}