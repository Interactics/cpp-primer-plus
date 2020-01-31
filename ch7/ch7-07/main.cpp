#include <iostream>
const int Max = 5;

double* fill_array(double ar[], int limit);
void show_array(const double ar[], const double* limit);
void revlaue(double r, double ar[], const double* limit);

int main() {
	using namespace std;
	double properties[Max];
	double* Lproperties;

	Lproperties = fill_array(properties, Max);
	show_array(properties, Lproperties);
	int size = (int(Lproperties) - int(properties)) / sizeof(double) -1;
	if (size > 0) {
		cout << "재평가율을 입력하십시오: ";
		double factor;
		while (!(cin >> factor)) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "잘못 입력했습니다, 수치를 입력하세요: ";
		}
		revlaue(factor, properties, Lproperties);
		show_array(properties, Lproperties);
	}
	cout << "프로그램을 종료합니다.\n";
	cin.get();
	cin.get();
	return 0;
}

double* fill_array(double ar[], int limit) {
	using namespace std;
	double temp;
	int i;
	for (i = 0; i < limit; i++) {
		cout << (i + 1) << "번 부동산의 가격: $";
		cin >> temp;
		if(!cin) {
			cin.clear();
			while (cin.get() != '\n') continue;
			cout << "입력 불량; 입력 과정을 끝내겠습니다. \n";
			break;
		}
		else if (temp < 0) 
			break;

		ar[i] = temp;
	}

	return ar + i;
}

void show_array(const double ar[], const double* limit) {
	using namespace std;
	for (int i = 0; (ar + i) < limit; i++) {
		cout << (i + 1) << "번 부동산: $";
		cout << ar[i] << endl;
	}
}

void revlaue(double r, double ar[], const double* limit) {
	for (int i = 0; (ar + i) < limit; i++)
		ar[i] *= r;
}