#include "namesp.h"

namespace SALES{

Sales::Sales(const double ar[], int n) {
    double sum = 0;
    double temp_m = ar[0], temp_M = ar[0];
    
    if (n > 4) n = 4;
    
    for (int i = 0; i < 4; i++) {
        if(i < n) sales[i] = ar[i];
        else sales[i] = 0;
        
        temp_M = sales[i] > temp_M ? sales[i] : temp_M;
        temp_m = sales[i] < temp_m ? sales[i] : temp_m ;
        sum += sales[i];
    }
    
    sum /= 4;
    
    max = temp_M;
    min = temp_m;
    average = sum;
}


//대화식
Sales::Sales() {
    using std::cin;
    using std::cout;
    using std::endl;
    
    int N = 4;
    double sum = 0;
    
    for (int i = 0; i < N; i++) {
        cout << i+1 << "분기 판매액 : " << endl;
        cin >> sales[i];
    }
    
    double temp_m = sales[0], temp_M = sales[0];
    while (N--) {
        temp_M = sales[N] > temp_M ? sales[N] : temp_M;
        temp_m = sales[N] < temp_m ? sales[N] : temp_m;
        sum += sales[N];
    }
    sum /= 4;
    
    max = temp_M;
    min = temp_m;
    average = sum;
    
}

Sales::~Sales() {}

void Sales::showSales() const{
    using std::cin;
    using std::cout;
    using std::endl;
    
    for (int i = 0; i < 4; i++) {
        cout <<" "<<i+1 << "분기 매출 : " << sales[i];
    }
    cout << endl << "평균값 : " << average << endl;
    cout << "최소값 : " << min << endl;
    cout << "최대값 : " << max << endl;
};
};
