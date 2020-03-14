//usestack.cpp
#include "stack.h"
#include <iostream>

int main(){
    using namespace std;
    Stack c_stack;
    customer temp;
    char c_fullname[35];
    double c_payment;

    double totalIncome = 0;
    char choice;

    cout << "고객 추가 : A, 고객 삭제 : B, 종료 : Q" << endl;

    while (cin >> choice){
        if (choice == 'q' || choice == 'Q') break;
        switch (choice){
        case ('a'):
        case ('A'):
            if (c_stack.isfull()) {
                cout << "고객 저장 리스트가 가득참" << endl;
                break;
            }
            cout << "고객의 이름 : ";
            cin >> temp.fullname;
            cout << "고객의 지출 : ";
            cin >> temp.payment;
            c_stack.push(temp);
            break;
        case ('b'):
        case ('B'):
            if (c_stack.isempty()){
                cout << "고객 저장 리스트가 비어있음" << endl;
                break;
            }
            c_stack.pop(temp);
            cout << "고객 이름  : " << temp.fullname << "지출 : " << temp.payment << endl; 
            totalIncome += temp.payment;
            break;
        }
		cout << "고객 추가 : A, 고객 삭제 : B, 종료 : Q" << endl;
    }
	while (!c_stack.isempty()) {
		c_stack.pop(temp);
		totalIncome += temp.payment;
	}

    cout << "총 수입 " << totalIncome << endl;
    cout << "프로그램 종료" << endl;
    return 0;
}