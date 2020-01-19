#include <iostream>

using namespace std;

int main() {
	int input;
	int sum = 0;
	cout << "수를 입력해주세요. 0을 입력하면 종료됩니다. " << endl;

	do{
		cin >> input;
		sum += input;
	} while (input != 0);

	cout << "입력된 수들의 누계는 " << sum << "입니다. " << endl;
	
	return 0;	
}