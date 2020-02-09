#include "namesp.h"

int main() {
    using namespace SALES;
    
    int num = 3;
    double sales_2019[3] = { 1,2,3 };

    std::cout << "---매출 입력---" << std::endl;
    Sales Y2019(sales_2019, num);
    Sales Y2020;
    std::cout << std::endl << std::endl;

    std::cout << "---매출 출력---" << std::endl;
    std::cout << "2018" << std::endl;
    Y2019.showSales();
    std::cout << "2019" << std::endl;
    Y2020.showSales();

    return 0;
}
