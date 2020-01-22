#include <iostream>

int main() {
	char choice;

	std::cout << "다음 선택 사항 중에서 하나를 선택하십시오. (끝내려면 q)" << std::endl;
	std::cout << "c) camera \t p) pianist" << std::endl;
	std::cout << "t) tree \t g) game" << std::endl;

	bool quit_flag{ false };

	do {
		std::cin >> choice;
		quit_flag = false;

		switch (choice) {
		case 'c': std::cout << "카메라는 눈과 유사합니다." << std::endl;
			break;
		case 'p': std::cout << "피아니스트는 피아노를 잘 칩니다. " << std::endl;
			break;
		case 't': std::cout << "단풍나무는 잎이 별처럼 생겼습니다." << std::endl;
			break;
		case 'g': std::cout << "게임을 좋아하시나요? " << std::endl;
			break;
		case 'q': std::cout << "프로그램을 종료합니다." << std::endl;
			break;
		default: std::cout << "c, p, t, g 중에서 하나를 선택하십시오. (끝내려면 q) : " << std::endl;
			quit_flag = true;
			break;
		}
	} while (quit_flag);

	return 0;
}