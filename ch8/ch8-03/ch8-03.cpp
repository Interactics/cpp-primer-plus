#include <iostream>
#include <string>
using namespace std;

void changeCAP(string& str);

int main() {
	string str;
	while (true) {
		cout << "문자열을 입력하시오 (끝내려면 q) : ";
		getline(cin, str);
		if (str == "q") break;
		changeCAP(str);

	}

}

void changeCAP(string& str) {
	for (int i = 0; i< str.size() ; i++) str[i] = toupper(str[i]);
	cout << str << endl;
}