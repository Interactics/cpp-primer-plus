#include <iostream>

template <typename T>
void ShowArray(T arr[], int n);

template <typename T>
void ShowArray(T* arr[], int n);

template <typename T>
T SumArray(T arr[], int n);

template <typename T>
T SumArray(T* arr[], int n);

struct debts {
	char name[50];
	double amount;
};

int main() {
	using namespace std;
	int things[6] = { 13, 31, 103, 301, 310, 130 };
	debts mr_E[3] = {
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0}
	};
	double* pd[3];

	for (int i = 0; i < 3; i++) pd[i] = &mr_E[i].amount;
	cout << "Mr. E의 재산 목록 :\n";
	ShowArray(things, 6);

	cout << "Mr. E의 채무 목록:\n";
	ShowArray(pd, 3);
	
	cout << "Mr. E의 재산 목록 합:\n";
	cout << SumArray(things, 6) << endl;

	cout << "Mr. E의 재산 목록 합:\n";
	cout << SumArray(pd, 3) << endl;

	return 0;
}

template <typename T>
void ShowArray(T arr[], int n) {
	using namespace std;
	cout << "템플릿 A\n";
	for (int i = 0; i < n; i++) cout << arr[i] << ' ';
	cout << endl;
}

template <typename T>
void ShowArray(T* arr[], int n) {
	using namespace std;
	cout << "템플릿 B\n";
	for (int i = 0; i < n; i++) cout << *arr[i] << ' ';
	cout << endl;
}

template <typename T>
T SumArray(T arr[], int n) {
	T sum = 0;
	while (n--) {
		sum += *(arr++);
	}
	return sum;
}

template <typename T>
T SumArray(T* arr[], int n) {
	T sum = 0;
	for (int i = 0; i < n; i++) sum += *arr[i];

	return sum;
}