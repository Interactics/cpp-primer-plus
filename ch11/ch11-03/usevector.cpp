#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"

int main() {
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;

	unsigned long Max = 0, Min = 99, Average = 0;
	unsigned itr = 0;

	cout << "목표 거리를 입력하십시오(끝내려면 q): ";
	while (cin >> target) {
		cout << "보폭을 입력하십시오: ";
		if (!(cin >> dstep)) break;

		while (result.magval() < target) {
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		result.polar_mode();

		Max = Max > steps ? Max : steps;
		Min = Min < steps ? Min : steps;
		Average += steps;

		steps = 0;
		result.reset(0.0, 0.0);
		itr++;
		cout << "목표 거리를 입력하십시오(끝내려면 q): ";
	}
	Average /= itr;

	cout << "Max : " << Max << " Min : " << Min << " Average : " << Average << endl;
	cout << "프로그램을 종료합니다.\n";

	cin.clear();
	while (cin.get() != '\n')
		continue;
	return 0;
}