#include <iostream>
#include <cstring>
using namespace std;

struct stringy {
	char* str;
	int ct;
};

void set(stringy& stgy, const char* ch);
void show(const stringy& str, int n = 1);
void show(const char* str, int n = 1);

int main(void)
{
	stringy beauy;
	char testing[] = "Reality isn't what it used to be.";
	set(beauy, testing);
	show(beauy);
	show(beauy, 3);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 2);
	show("Done!");
	delete[] beauy.str;
	return 0;
}

void set(stringy& stgy, const char* ch) {
	char* str_store;
	const int lenSize = strlen(ch);
	stgy.str = new char[lenSize + 1];
	stgy.ct = lenSize;
	strcpy(stgy.str, ch);
}

void show(const stringy& str, int n) {
	for (int i = 0; i < n; i++) cout << "str :" << str.str << "/t ct :" << str.ct << endl;
}

void show(const char* str, int n) {
	for (int i = 0; i < n; i++) cout << str << endl;
}
