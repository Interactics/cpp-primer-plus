#include <iostream>
#include <cctype>

int main() {
	char ch[10];

	int num_aiueo = 0;
	int num_anti_aiueo = 0;
	int num_etc = 0;

	std::cout << "단어들을 입력하시오 (끝내려면 q) : " << std::endl;

	while (true) {
		std::cin >> ch;

		if (isalpha(ch[0])) {
			switch (ch[0]) {
			case 'a':
			case 'i':
			case 'u':
			case 'e':
			case 'o':
			case 'A':
			case 'I':
			case 'U':
			case 'E':
			case 'O':
				num_aiueo++;
				break;

			default :
				num_anti_aiueo++;
				break;
			}
			if (ch[0] == 'q') {
				if (!isalpha(ch[1])) {
					std::cout << "프로그램 종료 " << std::endl;
					num_anti_aiueo--;
					break;
				}
			}

		}
		else num_etc++;
	}

	std::cout << "모음으로 시작하는 단어 수 : " << num_aiueo << std::endl;
	std::cout << "자음으로 시작하는 단어 수 : " << num_anti_aiueo << std::endl;
	std::cout << "기타 : " << num_etc << std::endl;

	return 0;

}

