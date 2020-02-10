#include <iostream>

const int STRSIZE{ 100 };
const int NUM_MEMBER{ 5 };

struct bop {
	char fullname[STRSIZE];
	char title[STRSIZE];
	char bopname[STRSIZE];
	int preference; // 0 = fullname, 1= title, 2 = bopname;
};

int main() {
	bop members[NUM_MEMBER] = {
		{"Wimp Macho", "BOSS", "WM_BOSS", 0},
		{"Raki Rhodes", "MANAGER", "RR_MAN",1},
		{"Celia Laiter","MANAGER", "CL_MAN",2},
		{"Hoppy Hipman","SALESMAN", "HH_SAL",1},
		{"Pat Hand", "INTERN", "PH_INT",1}
	};

	char choice;
	bool quit{ false };

	std::cout << "Benevolent Order Of Programmers" << std::endl;
	std::cout << "a. 실명으로 열람 \t\t b. 직함으로 열람" << std::endl;
	std::cout << "c. BOP 아이디로 열람 \t\t d. 회원이 지정한 것으로 열람" << std::endl;
	std::cout << "q. 종료" << std::endl;

	do{
		std::cout << "원하는 것을 선택하십시오 : " ;
		std::cin >> choice;
		switch (choice) {
		case 'a': //실명으로 열람
			for (int i = 0; i < NUM_MEMBER; i++) std::cout << members[i].fullname << std::endl;
			break;
		case 'b': //직함으로 열람
			for (int i = 0; i < NUM_MEMBER; i++) std::cout << members[i].title << std::endl;
			break;
		case 'c': //BOP 아이디로 열람
			for (int i = 0; i < NUM_MEMBER; i++) std::cout << members[i].bopname << std::endl;
			break;
		case 'd': //회원이 지정한 것으로 열람
			for (int i = 0; i < NUM_MEMBER; i++) {
				switch (members[i].preference) {
				case 0 : //이름 출력
					std::cout << members[i].fullname << std::endl;
					break;
				case 1 : //직함 열람
					std::cout << members[i].title << std::endl;
					break;
				case 2 :
					std::cout << members[i].bopname << std::endl;
					break;
				}
			}
			break;
		case 'q':
			std::cout << "프로그램을 종료합니다. " << std::endl;
			quit = true;
			break;
		}
	} while (!quit);
	

	return 0;
}