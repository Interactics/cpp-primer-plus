#include <iostream>
#include <array>

const int SIZE { 10 };

int main() {
	std::array<double, SIZE> donation;

	std::cout << "본 프로그램은 수가 아닌 입력이 들어오면 종료됩니다." << std::endl;

	int count;
	double avg { 0 };
	for (count = 0 ; count < SIZE; count++) {
		std::cout << count+1 << "번째" << " 기부금을 입력해주세요";
		
		if (!(std::cin >> donation[count])) break;				//숫자가 아닐 때 종료. cin은 데이터 타입이 맞지 않으면 false를 리턴한다.

		avg = avg * (count) / (count + 1) + donation[count] / (count + 1);		//평균 필터 알고리즘
	}
	
	//평균과 평균보다 큰 기부금의 갯수 구하기

	int NumOfOver = 0;
	for (int numb : donation) if (avg < numb) NumOfOver++;

	std::cout << "평균은 " << avg << "입니다." << std::endl;
	std::cout << "평균보다 큰 기부금 배열의 갯수는 " << NumOfOver << "입니다."<< std::endl;

	return 0;
}