#include <iostream>
#include <array>
#include <string>

const int Seasons = 4;
const char* Sname[4] = { "Spring", "Summer", "Fall", "Winter" };

struct expn{
	double expenses[Seasons];
};

void fill(expn* pa);
void show(const expn* da);

int main() {
	expn expenses;

	fill(&expenses);
	show(&expenses);
	return 0;
}

void fill(expn* pa) {
	using namespace std;
	for (int i = 0; i < Seasons; i++) {
		cout << *(Sname + i) << "에 소요되는 비용:";
		cin >> pa->expenses[i];
	}
}

void show(const expn* da) {
	using namespace std;
	double total = 0.0;

	cout << "\n계절별 비용\n";
	for (int i = 0; i < Seasons; i++) {
		cout << *(Sname + i) << " : $" << da->expenses[i] << endl;
		total += da->expenses[i];
	}
	cout << "총 비용 : $" << total;
}