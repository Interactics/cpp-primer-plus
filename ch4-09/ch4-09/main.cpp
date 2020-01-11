#include <iostream>
#include <string>

struct CandyBar{
    std::string brandName;
    float weight;
    int calorie;
};

int main(){

    
    CandyBar* pCandy = new CandyBar [3];
    
    pCandy[0] = {"해태", 3.0, 500};
    pCandy[1] = {"농심", 5.3, 340};
    pCandy[2] = {"롯데", 6.0, 240};
    
    
    std::cout << pCandy[0].brandName
    <<" " << pCandy[0].weight << " "<< pCandy[0].calorie << std::endl;
    
    std::cout << pCandy[1].brandName
    <<" " << pCandy[1].weight << " "<< pCandy[1].calorie << std::endl;
    
    std::cout << pCandy[2].brandName
    <<" " << pCandy[2].weight << " "<< pCandy[2].calorie << std::endl;
    
    return 0;
}
