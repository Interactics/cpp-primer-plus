#include <iostream>
#include "golf.h"

int main() {
    golf ann("Ann Birdfree", 24);
    golf person;

    person.showgolf();
    person.handicap(99);
    person.showgolf();
    
    ann.showgolf();
    ann.handicap(10);
    ann.showgolf();
    
    std::cout << "종료" << std::endl;
    return 0;
}
