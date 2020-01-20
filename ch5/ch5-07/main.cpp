#include <iostream>
#include <string>

struct car {
	char company[20];
	int year;
};


int main() {

	int numOfCar;

	std::cout << "몇 대의 차를 목록으로 관리하시겠습니까? ";
	std::cin >> numOfCar;

	car* carList = new car[numOfCar];
	
	//입력 부분
	for (int i = 0; i < numOfCar; i++) {
		std::cout << "자동차 #" << i+1 <<":" <<std::endl;
		std::cout << "제작업체: ";
		std::cin >> carList[i].company;
		std::cout << "제작년도: ";
		std::cin >> carList[i].year;
	}

	//출력부분
	std::cout << "현재 귀하가 보유하고 있는 자동차 목록은 다음과 같습니다." << std::endl;

	for (int i = 0; i < numOfCar; i++) {
		std::cout << carList[i].year << "년형 " << carList[i].company << std::endl;

	}

	return 0;
}