#ifndef HEADER_H
#define HEADER_H
#include <iostream>

namespace SALES {
class Sales{
    enum {QUARTERS = 4};
    
private:
    double sales[QUARTERS];
    double average;
    double max;
    double min;
    
public:
    Sales();
    Sales(const double ar[], int n);
    ~Sales();
    
    void showSales() const;
};
};
#endif
