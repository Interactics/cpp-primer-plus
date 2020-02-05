#ifndef HEADER_H
#define HEADER_H

namespace SALES {
	const int QUARTERS = 4;
	double sales[QUARTERS];
	double average;
	void setSales(Sales& s, const double ar[], int n);
	void setSales(sales& s);
	void showSales(const Sales& s);
}

#endif