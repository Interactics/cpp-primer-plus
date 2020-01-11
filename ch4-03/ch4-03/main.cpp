#include <iostream>

const int charSize = 30;

using namespace std;


int main(){
    char firstname[30];
    char lastname[30];

    
    cout << "영문 퍼스트 네임 (이름) : ";
    cin.getline(firstname, charSize);
    cout << "영문 라스트 네임 (성) : ";
    cin.getline(lastname, charSize);
    cout << "하나의 문자열로 만들면 : ";
    strcat(lastname, ", "); //, 를 집어넣기 위한 수작
    strcat(lastname, firstname);
    cout << lastname << endl;
    
    
    return 0;
    
}
