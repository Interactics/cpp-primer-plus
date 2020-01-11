#include <iostream>
#include <string>

struct CandyBar{
    std::string brandName;
    float weight;
    int calorie;
};

int main(){
    CandyBar snack[3];
    
    snack[0] = {"해태", 3.0, 500};
    snack[1] = {"농심", 5.3, 340};
    snack[2] = {"롯데", 6.0, 240};
    
    std::cout << snack[0].brandName
    <<" " <<snack[0].weight << " "<< snack[0].calorie << std::endl;
    
    std::cout << snack[1].brandName
    <<" " <<snack[1].weight << " "<< snack[1].calorie << std::endl;
    
    std::cout << snack[2].brandName
    <<" " <<snack[2].weight << " "<< snack[2].calorie << std::endl;
    
    return 0;
}
