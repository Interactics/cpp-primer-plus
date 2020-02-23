#include <iostream>
#include "classic.h"

// Method of Cd
Cd::Cd(const char* l, const char* s2, const int n, const double x){
    std::strcpy(performers, l);
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd& d){
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd() {}

Cd::~Cd() {}

void Cd::Report() const {
    using std::cout;
    using std::endl;

    cout << "Performer: " << performers << endl;
    cout << "Label: " << label << endl;
    cout << "Selection: "<< selections << endl;
    cout << "Playtime: " << playtime << endl;
}

Cd& Cd::operator=(const Cd& d){
    if (this == &d)
        return *this;
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
    std::strcpy(classicNum, c);
}

Classic::Classic(const char* c, const Classic& d) 
                : Cd(d) {
    std::strcpy(classicNum, c);
}

Classic::Classic() : Cd() {}

Classic::~Classic() {}

void Classic::Report() const {
    std::cout << "Classic: " << classicNum << std::endl;
    Cd::Report();
}

Classic& Classic::operator=(const Classic& d){
    if (this == &d) 
        return *this;
    Cd::operator=(d);
    std::strcpy(classicNum,d.classicNum);
    return *this;
}