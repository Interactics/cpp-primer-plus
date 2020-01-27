#include <iostream>
#include <cctype>

int main() {
	char ch;

	int num_aiueo = 0;
	int num_anti_aiueo = 0;
	int num_etc = 0;

	std::cout << "단어들을 입력하시오 (끝내려면 q) : " << std::endl;
	std::cin.get(ch);
	while (true) {
		if (isalpha(ch)) {
			switch (ch) {
			case 'a':
			case 'i':
			case 'u':
			case 'e':
			case 'o':
				num_aiueo++;
				break;
			default :
				num_anti_aiueo++;
				break;
			}
			if (ch == 'q') {
				std::cin.get(ch);

				if (!isalpha(ch)) {
					std::cout << "프로그램 종료 " << std::endl;
					num_anti_aiueo--;
					break;
				}
				else num_anti_aiueo++;
			}

		}
		else num_etc++;

		do {
			std::cin.get(ch);
		} while (!isspace(ch));

		std::cin.get(ch); //빈칸 리딩 방지.
	}

	std::cout << "모음으로 시작하는 단어 수 : " << num_aiueo << std::endl;
	std::cout << "자음으로 시작하는 단어 수 : " << num_anti_aiueo << std::endl;
	std::cout << "기타 : " << num_etc << std::endl;

	return 0;

}

