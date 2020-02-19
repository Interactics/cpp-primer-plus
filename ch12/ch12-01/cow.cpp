#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "cow.h"

using std::cout;
using std::endl;

Cow::Cow() {
	std::strcpy(name, "NONAME");
	hobby = new char[1];
	hobby[0] = '\0';
	weight = 0.0;
}

Cow::Cow(const char* nm, const char* ho, double wt) {
	std::strcpy(name, nm);

	int LEN = std::strlen(ho);
	delete[] hobby;
	hobby = new char[LEN + 1];
	std::strcpy(hobby, ho);

	weight = wt;
}

Cow::Cow(const Cow& c) {
	std::strcpy(name, c.name);

	int LEN = std::strlen(c.hobby);
	hobby = new char[LEN + 1];
	std::strcpy(hobby, c.hobby);

	weight = c.weight;
}

Cow::~Cow() {
	delete[] hobby;
}

Cow& Cow::operator=(const Cow& c){
	if (this == &c) 
		return *this;
	delete[] hobby;
	std::strcpy(name, c.name);
	
	int LEN = std::strlen(c.name);
	hobby = new char[LEN + 1];
	std::strcpy(hobby, c.hobby);

	weight = c.weight;

	return *this;
}

void Cow::ShowCow() const {
	cout << "이름 : " << name << endl;
	cout << "취미 : " << hobby << endl;
	cout << "무게 : " << weight<< endl;
}