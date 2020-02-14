#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
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

	ofstream File;

	File.open("randwalk1.txt");

	cout << "목표 거리를 입력하십시오(끝내려면 q): ";
	cin >> target;
	cout << "보폭을 입력하십시오: ";
	cin >> dstep;
	File << "목표 거리: "<< target << ", 보폭: " << dstep << endl;
	File << steps << ": " << result << endl;

	while (result.magval() < target) {
		direction = rand() % 360;
		step.reset(dstep, direction, Vector::POL);
		result = result + step;
		steps++;
		File << steps << ": " << result << endl;
	}

	File << steps << " 걸음을 걸은 후 술고래의 현재 위치:\n";
	File << result << endl;
	result.polar_mode();
	File << " 또는 \n" << result << endl;
	File << "걸음당 기둥에서 벗어난 평균 거리 = " << result.magval() / steps << endl;
	steps = 0;
	result.reset(0.0, 0.0);

	cout << "프로그램을 종료합니다.\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	return 0;
}