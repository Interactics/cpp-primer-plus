#include <iostream>

using namespace std;

int main() {
	int total_A = 100000;
	int total_B = 100000;

	int init_A = 100000;
	int init_B = 100000;

	int years = 0;

	while (total_A >= total_B) {
		total_A = init_A * 0.1 + total_A;
		total_B = total_B * 0.05 + total_B;

		years++;
	}

	cout << "고객 B가 고객 A의 투자 가치를 초과하는 년 수는 " << years << " 입니다" << endl;
	cout << "고객 A의 총 수익 " << total_A << endl;
	cout << "고객 B의 총 수익 " << total_B << endl;

	return 0;
}