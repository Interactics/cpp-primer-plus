#include <iostream>

struct number {
	double x, y;
};

double Harmonic(number* num);

int main() {
	number XY;
	double result;

	std::cout << "숫자 두개를 입력해주세요" << std::endl;

	while (std::cin >> XY.x >> XY.y) {
		if (XY.x == 0 or XY.y == 0) break;
		
		result = Harmonic(&XY);
		std::cout << "조화평균 = " << result << std::endl;
	}

	std::cout << "프로그램을 종료합니다." << std::endl;

	return 0;
}

double Harmonic(number* num) {
	double mean;
	mean = 2.0 * num->x * num->y / (num->x + num->y);

	return mean;
}
