#ifndef MYTIME_H_
#define MYTIME_H_
#include <iostream>

using namespace std;
class Time{
	int hours;
	int minutes;

public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);

	friend Time operator+(const Time & t1, const Time & t2);
	friend Time operator-(const Time & t1, const Time & t2);
	friend Time operator*(const Time & t, double mult);
	friend Time operator*(double mult, const Time& t);

	friend ostream & operator<<(ostream & os, const Time & t);
};

#endif
