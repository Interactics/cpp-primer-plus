#include <iostream>
#include <cstring>
#include "golf.h"

golf::golf(const char* name, int hc) {
    strcpy(fullname_, name);
    handicap_ = hc;
}

golf::golf() {
    using namespace std;

    cout << "----SET GOLF-----" << endl;
    cout << "이름 : ";
    cin.getline(fullname_, Len);
    
    cout << "핸디캡 : ";
    cin >> handicap_;
    cin.get();
}

golf::~golf() {}

void golf::handicap(int hc) {
    using namespace std;

    cout << "----핸디캡 설정----" << endl;
    cout << "핸디캡 설정 : "<< hc << endl << endl;
    handicap_ = hc;

}
void golf::showgolf() const{
    using namespace std;

    cout << "----출력----" << endl;
    cout << "이름 : " << fullname_ << endl;
    cout << "핸디캡 " << handicap_ << endl <<endl;
}
