#include <iostream>

const int charSize = 30;

using namespace std;


int main(){
    char firstname[30];
    char lastname[30];
    char score;
    int age;
    
    cout << "영문 퍼스트 네임 (이름) : ";
    cin.getline(firstname, charSize);
    cout << "영문 라스트 네임 (성) : ";
    cin.getline(lastname, charSize);
    cout << "학생이 원하는 학점: ";
    cin >> score;
    cout << "나이 : ";
    cin >> age;
    
    score = score + 1;
    ///출력 부분
    
    cout << "성명: " << lastname << ", " << firstname << endl;
    cout << "학점: " << score << endl;
    cout << "나이: " << age << endl;
    
    return 0;
    
}
