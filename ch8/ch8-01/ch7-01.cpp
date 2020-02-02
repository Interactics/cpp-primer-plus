#include <iostream>
#include <string>
int main() {
	int a = 10;
	int& b = a;

	int c;

	c = b;

	using namespace std;

	cout << c << endl;
	c = 50;

	cout << b << endl;

}