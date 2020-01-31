#include <iostream>

long double probability(unsigned numbers, unsigned picks);

int main() {
	int last_num1, n_pick, last_num2;

	std::cout << "숫자의 범위를 입력해주세요 1부터 x 까지 x : ";
	std::cin >> last_num1;
	std::cout << "뽑을 갯수 : ";
	std::cin >> n_pick;
	std::cout << "하나를 뽑을 두 번째 범위 : ";
	std::cin >> last_num2;

	int prob = probability(last_num1, n_pick) * probability(last_num2, 1);

	std::cout << "당첨될 경우의 수는 " << prob << " 입니다." << std::endl;

	return 0;
}

long double probability(unsigned numbers, unsigned picks) {
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;

	return result;
}
