#include <iostream>

template <typename T>
T maxn(T* arr, int n);

template <> 
char* maxn<char*>(char* charArr[], int);

int main() {
	using namespace std;

	int arr_int[5] = { 10,20, 30,50,20 };
	double arr_doub[5] = { 1.5,2.5,7.6,4.3,2.2 };

	cout << max5(arr_int) << endl;
	cout << max5(arr_doub) << endl;

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

template <> char* maxn<char>(char){
	T maxn(T * arr, int n) {
		T n_large = *arr;
		for (int i = 0; i < n; i++)
			n_large = *(arr + i) > n_large ? *(arr + i) : n_large;
		return n_large;
	}
}
