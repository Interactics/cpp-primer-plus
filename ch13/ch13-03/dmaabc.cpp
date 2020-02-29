//dmaabc.cpp

#include "dmaabc.h"
#include <iostream>
#include <cstring>

/***********************
	Methods of ABCDMA
************************/
ABCDMA::ABCDMA(const char* l, int r ){
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}

ABCDMA::ABCDMA(const ABCDMA& rs){
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
}

ABCDMA::~ABCDMA(){
    delete[] label;
}

void ABCDMA::view(){
    std::cout << "상표 : " << label << std::endl;
    std::cout << "등급 : " << rating << std::endl;
}

std::ostream& operator<<(std::ostream& os, const ABCDMA& rs) {
	os << "상표 : " << rs.label << std::endl;
	os << "등급 : " << rs.rating << std::endl;
	return os;
}



/***********************
	Methods of baseDMA
************************/

baseDMA::baseDMA(const char* l, int r) 
	: ABCDMA(l, r){}
baseDMA::baseDMA(const baseDMA& rs) 
	: ABCDMA(rs){}
baseDMA::~baseDMA(){}

void baseDMA::view(){
    ABCDMA::view();
}

baseDMA& baseDMA::operator=(const baseDMA& rs){
    if (this == & rs)
        return *this;
    delete[] label;
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const baseDMA& rs){
    os << "상표 : " << rs.label << std::endl;
    os << "등급 : " << rs.rating << std::endl;
    return os;
}


/***********************
	Methods of lacksDMA
************************/

lacksDMA::lacksDMA(const char* c, const char* l, int r)
    : ABCDMA(l, r){
    std::strcpy(color, c);
}

lacksDMA::lacksDMA(const char* c, const baseDMA& rs)
    : ABCDMA(rs){
    std::strcpy(color, c);
}

std::ostream& operator<<(std::ostream& os, const lacksDMA& rs){
	os << (const baseDMA &) rs;
    os << "색상: " << rs.color << std::endl;
    return os;
}

void lacksDMA::view(){
    ABCDMA::view();
    std::cout << "색상: " << color << std::endl;
}


/**************************
	Methods of hasDMA
***************************/

hasDMA::hasDMA(const char* s, const char* l , int r)
    : ABCDMA(l, r){
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}
hasDMA::hasDMA(const char* s, const baseDMA& rs)
    : ABCDMA(rs){
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}
hasDMA::hasDMA(const hasDMA& hs) 
	: ABCDMA(hs) {
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}
hasDMA::~hasDMA(){
    delete[] style;
}

void hasDMA::view() {
	ABCDMA::view();
	std::cout << "스타일: " << style << std::endl;
}


hasDMA& hasDMA::operator=(const hasDMA& hs){
    if (this == &hs)
        return *this;
    ABCDMA::operator=(hs);
    delete[] style;
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
    return *this;
}
std::ostream& operator<<(std::ostream& os, const hasDMA& rs) {
    os << (const ABCDMA&) rs;
    os << "스타일: " << rs.style << std::endl;
    return os;
}

