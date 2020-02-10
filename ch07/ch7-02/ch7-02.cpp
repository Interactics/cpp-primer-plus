#include <iostream>
const int Max{ 10 };

int input_score(double scr[], int limit);
void output_score(const double scr[], int limit);
double mean_score(const double scr[], int limit);

int main() {
	double score[Max];
	int limit;
	double mean;

	limit = input_score(score, Max);
	output_score(score, limit);
	mean = mean_score(score, limit);
	std::cout << "평균 : " << mean << std::endl;

	return 0;
}

int input_score(double scr[], int limit) {

	double number = 0;
	int order{ 0 };

	std::cout << "골프 스코어를 입력해주세요 (음수를 입력하면 종료) : " << std::endl;
	for (order = 0; order < limit; order++) {
		std::cin >> number;
		if (number < 0) break;
		scr[order] = number;
	}

	return order;
}

void output_score(const double scr[], int limit) {
	std::cout << "골프 스코어 결과입니다.  " << std::endl;
	for (int i = 0; i < limit ; i++)
		std::cout << i + 1 << "번째 스코어 : " << scr[i] << std::endl;
}

double mean_score(const double scr[], int limit) {
	double mean = 0;
	for (int i = 0; i < limit; i++)
		mean += scr[i];
	mean /= limit;

	return mean;
}