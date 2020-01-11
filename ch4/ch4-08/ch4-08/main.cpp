#include <iostream>
#include <string>

struct pizzaCompany{
    std::string name;
    int diameter;
    int weight;
};

using namespace std;

int main(){
    pizzaCompany* inc = new pizzaCompany;
    
    cout << "피자 회사 이름을 입력하세요 : " ;
    getline(cin, inc->name);
    cout << "피자의 지름 : ";
    cin >> inc->diameter;
    cout << "피자의 무게 : ";
    cin >> inc->weight;
    
    cout << inc->name <<' '<< inc->diameter<< ' ' << inc->weight << endl;
    
    delete inc;
    //꼭 써주자
    
    
    return 0;
    
}
