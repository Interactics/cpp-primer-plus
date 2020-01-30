#include <iostream>
#include <string>

struct donator{
	std::string Name;
	double money;
};

int main() {
	int NumOfDona;

	std::cout << "몇명이 기부할 것인가요? : " ;
	std::cin >> NumOfDona;

	donator* pDon = new donator[NumOfDona];

	for (int i = 0; i < NumOfDona; i++) {
		std::cout << "이름 : ";
		std::cin >> pDon[i].Name;
		
		std::cout << "기부금 : ";
		std::cin >> pDon[i].money;
	}

	//기부자 명단 출력

	//과학연산자 해제 후 소수점 둘째자리까지 표현.
	std::cout << std::fixed;

	if (NumOfDona == 0) 
		std::cout << "기부자가 없습니다. " << std::endl;
	else
		for (int j = 0; j < 2; j++) {
			if (j == 0) {
				std::cout << "고액 기부자 " << std::endl;
				for (int i = 0; i < NumOfDona; i++) {
					if (pDon[i].money >= 10000) std::cout << "이름 : " << pDon[i].Name << " 기부금 : " << pDon[i].money << std::endl;
				}
			}
			else {
				std::cout << "소액 기부자 " << std::endl;
				for (int i = 0; i < NumOfDona; i++) {
					if (pDon[i].money < 10000) std::cout << "이름 : " << pDon[i].Name << " 기부금 : " << pDon[i].money << std::endl;
				}
			}
		}
	


	delete[] pDon;

	return 0;
}
