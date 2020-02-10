#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib> //exit함수 사용을 위해

int main() {

	std::string fileName; // 파일명 
	std::ifstream inFile;

	std::cout << "데이터 파일의 이름을 입력하십시오 : ";
	std::cin >> fileName;

	inFile.open(fileName);

	if (!inFile.is_open()) {
		std::cout << fileName << " 파일을 열 수 없습니다. \n" << "파일을 종료합니다. " << std::endl;
		exit(EXIT_FAILURE);
	}

	char ch; // 문자 입력
	int numChar = 0; //문자의 갯수

	while (!inFile.eof()) {
		numChar++;
		inFile >> ch;
	}

	std::cout << "파일 끝에 도착하였습니다\n" << "파일을 종료합니다." << std::endl;
	std::cout << "문자의 수(화이트 스페이스 포함) : " << numChar << std::endl;

	inFile.close();

	return 0;
}