#include <iostream>

double add(double x, double y) { return x + y; }
double sub(double x, double y) { return x - y; }
double mult(double x, double y) { return x * y; }
double divd(double x, double y) { return x / y; }
double calculate(double x, double y, double (*pf)(double, double));

enum oper {Plus, Minus, Mul,  Div};

int main() {
	char oper;
	double (*pf[4])(double, double) = { add, sub, mult, divd };
	double input1, input2;

	std::cout << "숫자 두 개를 입력하세요 : ";
	while (std::cin >> input1 >> input2) {
		std::cout << "연산 : ";
		std::cin >> oper;
		switch (oper) {
		case '+' : 
			std::cout << calculate(input1, input2, *pf[Plus]) << std::endl;
			break;
		case '-' :
			std::cout << calculate(input1, input2, *pf[Minus]) << std::endl;
			break;
		case '*' :
			std::cout << calculate(input1, input2, *pf[Mul]) << std::endl;
			break;
		case '/' :
			std::cout << calculate(input1, input2, *pf[Div]) << std::endl;
			break;
		default :
			std::cout << "재입력하시오" << std::endl;
			break;
		}
	}
	return 0;
}

double calculate(double x, double y, double (*pf)(double, double)) {
	return pf(x, y);
}