#include <iostream>
#include "classic1.h"

// Method of Cd
Cd::Cd(const char* l, const char* s2, const int n, const double x) {
	performers = new char[std::strlen(l) + 1];
	label = new char[std::strlen(s2) + 1];
	std::strcpy(performers, l);
	std::strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd& d) {
	performers = new char[std::strlen(d.performers) + 1];
	label = new char[std::strlen(d.label) + 1];
	std::strcpy(performers, d.performers);
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd() {
	performers = new char[1];
	label = new char[1];
	performers = '\0';
	label[0] = '\0';
	selections = 0;
	playtime = 0.0;
}

Cd::~Cd() {
	delete[] performers;
	delete[] label;
}

void Cd::Report() const {
	using std::cout;
	using std::endl;

	cout << "Performer: " << performers << endl;
	cout << "Label: " << label << endl;
	cout << "Selection: " << selections << endl;
	cout << "Playtime: " << playtime << endl;
}

Cd& Cd::operator=(const Cd& d) {
	if (this == &d)
		return *this;
	delete[] performers;
	delete[] label;
	performers = new char[std::strlen(d.performers) + 1];
	label = new char[std::strlen(d.label) + 1];
	std::strcpy(performers, d.performers);
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;

	return *this;
}
//=============

// Method of Classic 
Classic::Classic(const char* c, const char* l, const char* s2, const int n, const double x)
	: Cd(l, s2, n, x) {
	classicNum = new char[std::strlen(c) + 1];
	std::strcpy(classicNum, c);
}

Classic::Classic(const char* c, const Classic& d)
	: Cd(d) {
	classicNum = new char[std::strlen(c) + 1];
	std::strcpy(classicNum, c);
}

Classic::Classic() : Cd() {
	classicNum = new char[1];
	classicNum[0] = '\0';
}

Classic::~Classic() {
	delete[] classicNum;
}

void Classic::Report() const {
	std::cout << "Classic: " << classicNum << std::endl;
	Cd::Report();
}

Classic& Classic::operator=(const Classic& d) {
	if (this == &d)
		return *this;
	Cd::operator=(d);
	delete[] classicNum;
	classicNum = new char[std::strlen(d.classicNum) + 1];
	std::strcpy(classicNum, d.classicNum);
	return *this;
}