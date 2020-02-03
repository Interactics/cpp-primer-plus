#include <iostream>

template <typename T>
T maxn(T* arr, int n);

template <> 
char* maxn<char*>(char* charArr[], int);

int main() {
	using namespace std;

	int arr_int[6] = { 10,20, 30,50,20,-10 };
	double arr_doub[5] = { 1.5,2.5,7.6,4.3, };
	const char* arr_str[] = { "hello", "hi", "good moring" };

	cout << maxn(arr_int, sizeof(arr_int) / sizeof(int)) << endl;
	cout << maxn(arr_doub, sizeof(arr_doub) / sizeof(double)) << endl;
	cout << maxn(arr_str, sizeof(arr_str) / sizeof(*arr_str)) << endl;

	return 0;
}

template <typename T>
T max5(T* arr) {
	T n_large = *arr;

	for (int i = 0; i < 5; i++)
		n_large = *(arr + i) > n_large ? *(arr + i) : n_large;

	return n_large;
}

template <typename T>
T maxn(T* arr, int n) {
	T n_large = *arr;

	for (int i = 0; i < n; i++)
		n_large = *(arr + i) > n_large ? *(arr + i) : n_large;

	return n_large;
}

template <>
char* maxn<char*> (char* charArr[], int n){
	char* p_charArr = charArr[0];

	for (int i = 0; i < n; i++)
		p_charArr = strlen(*(charArr + i)) > strlen(p_charArr) ? *(charArr + i) : p_charArr;
	
	return p_charArr;
}