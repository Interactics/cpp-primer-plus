#include <iostream>
#include <string>

struct CandyBar{
    std::string brandName;
    float weight;
    int calorie;
};

int main(){
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    
    std::cout << snack.brandName
    <<" " <<snack.weight << " "
    << snack.calorie << std::endl;
    
    return 0;
    
}
