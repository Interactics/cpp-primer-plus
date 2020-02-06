#include <iostream>
#include <string>

void strPrint(const std::string* str, int n = 0);

int main() {
	std::string str;
	std::cout << "단어 입력 : ";
	std::cin >> str;

	int n = 0;

	while (true) {
		std::cout << "숫자 입력 : ";
		std::cin >> n;
		if (n == 0) strPrint(&str);
		else strPrint(&str, n);
	}
}

void strPrint(const std::string* str, int n) {
	static int n_recur = 0;

	if (n > 0) {
		std::cout << std::endl << "--반복--" << std::endl;
		for (int i = 0; i < n_recur; i++) std::cout << *str << std::endl;
		n_recur = 0;
	}
	else {
		std::cout << *str << std::endl;
		n_recur++;
	}
}
