#include <iostream>
#include <cctype>

using namespace std;
int main() {
	char ch;
	while (cin.get(ch) and ch != '@'){
		if (ch >= 'a' and ch <= 'z') ch += 'A' - 'a';
		else if (ch >= 'A' and ch <= 'Z') ch -= 'A' - 'a';
		cout << ch;
	}
	return 0;
}