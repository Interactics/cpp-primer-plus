#include <iostream>
#include <cctype>

const int Max = 100;

int Fill_array(double arr[], int size);
void Show_array(const double arr[], int size);
double* Reverse_array(const double arr[], int size);

int main() {
	int limit;
	double arr_orig[Max];
	double* arr_reverse;

	limit = Fill_array(arr_orig, Max);
	Show_array(arr_orig, limit);
	arr_reverse = Reverse_array(arr_orig, limit);
	Show_array(arr_reverse, limit);

	delete[] arr_reverse;

	return 0;
}

int Fill_array(double arr[], int size) {
	std::cout << "배열을 입력하세요(숫자가 아니면 종료) : " << std::endl;

	double checker;
	int limit = 0;

	for (limit = 0; limit < size  ; limit++) {
		if (!(std::cin >> checker)) break;
		arr[limit] = checker;
	}
	return limit;
}

void Show_array(const double arr[], int size) {
	std::cout << "배열의 출력 : " << std::endl;
	for (int i = 0; i < size; i++) 
		std::cout << *(arr+i) << std::endl;
}

double* Reverse_array(const double arr[], int size) {
	double* temp_arr = new double[size];
	temp_arr[0] = arr[0];
	temp_arr[size - 1] = arr[size - 1];

	for (int i = 1 ; i < size-1; i++) 
		temp_arr[size-i-1] = arr[i];

	return temp_arr;
}