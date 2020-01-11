#include <iostream>
#include <string>

using namespace std;

int main(){
    string firstname;
    string lastname;
    string name;

    cout << "영문 퍼스트 네임 (이름) : ";
    getline(cin, firstname);
    cout << "영문 라스트 네임 (성) : ";
    getline(cin, lastname);
    
    name =   lastname + ", " + firstname;
    
    cout << "이름 : " << name << endl;
    
    return 0;
}
