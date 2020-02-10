#include <iostream>
#include <cstring>
#include <cstdlib>
struct CandyBar {
	char brand[50];
	double weight;
	int cal;
};
void setCandy(CandyBar& src, const char* candyBrandname = "Millennium Munch", double candyWeight = 2.85, int candyCal = 350);
void displayCandy(const CandyBar& src);

int main() {
	using namespace std;
	CandyBar bar1;

	char name[] = "롯데";
	double weight = 50.85;
	int kal = 50;

	cout << "원본 캔디바" << endl;
	setCandy(bar1);
	displayCandy(bar1);
	cout << "세팅 변경" << endl;
	setCandy(bar1, name,weight, kal);
	displayCandy(bar1);

	return 0;
}

void setCandy(CandyBar & src, const char* candyBrandname, double candyWeight, int candyCal) {
	strcpy(src.brand, candyBrandname);
	src.weight = candyWeight;
	src.cal = candyCal;
}

void displayCandy(const CandyBar& src){
	std::cout << "상표명/t : " << src.brand << std::endl;
	std::cout << "중량/t : " << src.weight << std::endl;
	std::cout << "칼로리/t : " << src.cal << std::endl;
}