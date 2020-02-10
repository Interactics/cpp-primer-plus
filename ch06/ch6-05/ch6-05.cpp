#include <iostream>

int main() {
	float tvarp;
	int tax{ 0 };

	std::cout << "트바프 소득을 입력하세요 :";

	std::cin >> tvarp;

	int tax_cut[]{ 5000,10000,20000, 0};
	float tax_per[]{ 0, 0.10, 0.15, 0.20 };
	for (int i = 0; i < 4; i++) {
		if (i < 3) {
			if ((tvarp - tax_cut[i]) >= 0) {
				tax += tax_cut[i] * tax_per[i];
				tvarp -= tax_cut[i];
			}
			else {
				tax += tvarp * tax_per[i];
				tvarp = 0;
			}
		}
		else if (i == 3 and tvarp > 0)  tax += tvarp * tax_per[i];
	}

	std::cout << "세금은 " << tax << " 입니다." << std::endl;
}