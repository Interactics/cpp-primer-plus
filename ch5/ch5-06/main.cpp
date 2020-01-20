//C++ for Fools
#include <iostream>

const int MONTH = 12;

int main() {
	const char* month[MONTH] = {
		"Jan", "Feb", "Mar",
		"Apr", "May", "June",
		"July", "Aug","Sep",
		"Oct", "Nov", "Dec"
	};

	int profit[3][12];
	int sum[3] = {0};
	int sumofyear = 0;

	for (int year = 0; year < 3; year++) {
		std::cout << year + 1 <<"년째" << std::endl;

		for (int i = 0; i < MONTH; i++) {
			std::cout << i + 1 << "월 매출을 입력해주세요." << std::endl;
			std::cin >> profit[year][i];
			sum[year] = profit[year][i] + sum[year];
		}
		std::cout << "---------------" << std::endl << std::endl;
	}

	std::cout << std::endl << std::endl << std::endl;
	std::cout << "<매출 결과>" << std::endl << std::endl;

	for (int year = 0; year < 3; year++) {
		std::cout << "\t\t"<< year + 1 << "년째 매출 \n";
		for (int i = 0; i < MONTH; i++) {
			std::cout << month[i] << ":\t" << profit[year][i] << "\t";
			if ((i + 1) % 3 == 0) std::cout << std::endl;
		}

		sumofyear = sum[year] + sumofyear;

		std::cout << year + 1 <<"년째 총 판매량" << " : " << sum[year] << std::endl;
		std::cout << "  누적 총 판매량 : " << sumofyear << std::endl;
		std::cout << "----------------------" << std::endl << std::endl;;

	}


	return 0;
}