#include <iostream>
#include "header.h"

int main() {
	using namespace SALES;
	Sales Y2019, Y2018;

	int num = 3;
	double sales_2019[3] = { 10,15,11 };

	std::cout << "---매출 입력---" << std::endl;
	setSales(Y2019, sales_2019, num);
	setSales(Y2018);
	std::cout << std::endl << std::endl;

	std::cout << "---매출 출력---" << std::endl;
	std::cout << "2018" << std::endl;
	showSales(Y2018);
	std::cout << "2019" << std::endl;
	showSales(Y2019);

	return 0;
}