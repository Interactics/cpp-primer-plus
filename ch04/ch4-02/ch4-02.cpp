#include <iostream>

using namespace std;

int main(){
    string firstname;
    string lastname;
    char score;
    int age;
    
    cout << "영문 퍼스트 네임 (이름) : ";
    getline(cin, firstname); //string에서는 이렇게 쓰자
    cout << "영문 라스트 네임 (성) : ";
    getline(cin, lastname); //string형태로 변화
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
