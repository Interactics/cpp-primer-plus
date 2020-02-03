#include <iostream>
#include <string>

inline void strPrint(const std::string* str, int n = 0);

int main() {
	std::string str;
	int n = 0;
	std::cin >> str;

	while (true) {
		std::cin >> n;
		if (n == 0) strPrint(&str);
		else strPrint(&str, n);
	}
}

inline void strPrint(const std::string* str, int n) {
	static int n_recur = 0;

	if (n > 0) {
		std::cout << std::endl << "--반복--" << std::endl;
		for (int i = 0; i < n_recur; i++) std::cout << *str << std::endl;
		n_recur = 0;
	}
	else {
		std::cout << *str << std::endl;
		std::cout << n_recur << std::endl;
	}
}
