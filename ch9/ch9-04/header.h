#pragma once 
#ifndef HEADER_H
#define HEADER_H

namespace SALES {
	const int QUARTERS = 4;

	struct Sales {

		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};

	double sales[QUARTERS];
	double average;

	void setSales(Sales& s, const double ar[], int n);
	void setSales(Sales& s);
	void showSales(const Sales& s);
}

#endif

