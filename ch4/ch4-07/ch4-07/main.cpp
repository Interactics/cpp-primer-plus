#include <iostream>
#include <string>

struct pizzaCompany{
    char name[30];
    int diameter;
    int weight;
};

using namespace std;

int main(){
    pizzaCompany inc;
    
    cout << "피자 회사 이름을 입력하세요 : " ;
    cin.getline(inc.name, 30);
    cout << "피자의 지름 : ";
    cin >> inc.diameter;
    cout << "피자의 무게 : ";
    cin >> inc.weight;
    
    cout << inc.name <<' '<< inc.diameter<< ' ' << inc.weight << endl;
    
    return 0;
    
}
