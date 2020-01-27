#include <iostream>
#include <fstream>
#include <string>

struct donator {
	std::string Name;
	double money;
};

int main() {
	int NumOfDona;

	std::ifstream inFile;
	std::string fileName;

	std::cout << "파일 이름을 입력주세요 : ";
	std::cin >> fileName;

	inFile.open(fileName);
	if (!inFile.is_open()) {
		std::cout << fileName << " 파일을 여는 데에 실패하였습니다. \n프로그램을 종료합니다. " << std::endl;
		exit(EXIT_FAILURE); //파일 종료.
	}


	std::cout << "몇명이 기부할 것인가요? : ";
	inFile >> NumOfDona;
	inFile.get();
	//개행문자 제거

	std::cout << NumOfDona << std::endl;

	donator* pDon = new donator[NumOfDona];

	for (int i = 0; i < NumOfDona; i++) {
		std::cout << "이름 : ";
		std::getline(inFile, pDon[i].Name);
		std::cout << pDon[i].Name << std::endl;

		std::cout << "기부금 : ";
		inFile >> pDon[i].money;
		inFile.get();
		//개행문자 제거
		std::cout << pDon[i].money << std::endl;
	}

	//기부자 명단 출력

	//과학연산자 해제 후 소수점 둘째자리까지 표현.
	std::cout.precision(0);
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

	inFile.close();

	return 0;
}