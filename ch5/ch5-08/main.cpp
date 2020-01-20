#include <iostream>
#include <cstring>

int main() {
	char str[100];
	std::cout << "영어 단어들을 입력하십시오(끝내려면 done을 입력) : ";

	int words = 0;

	do {
		std::cin >> str;
		words++;
	} while (strcmp(str, "done") != 0);
	
	words--;
	std::cout << "총 " << words << "단어가 입력되었습니다." << std::endl;
	
	return 0;
}