#include <iostream>
#include <array> //array 사용을 위한 준비

using namespace std;

int main(){
    array<float, 3> runResult;
    
    cout << "첫번째 결과 : ";
    cin >> runResult[0];
    cout << "두번째 결과 : ";
    cin >> runResult[1];
    cout << "세번째 결과 : ";
    cin >> runResult[2];
    
    cout << "평균값 : " << (runResult[0] + runResult[1] + runResult[2])/3 << endl;
    
}
