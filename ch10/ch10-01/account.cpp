#include <iostream>
#include "account.h"

account::account() {
	name = "NO NAME";
	accnumber = "";
	bal = 0;
}

account::account(const std::string& NAME, const char* ACC_NUM, int MONEY) {
	name = NAME;
	accnumber = ACC_NUM;
	
	if (MONEY < 0) {
		std::cerr << "입금 금액이 음수이므로 0으로 설정합니다." << std::endl;
		bal = 0;
	}
	else 
		bal = MONEY;
}

account::~account() {}

void account::show() const {
	std::cout << "이름 : " << name << std::endl;
	std::cout << "계좌번호 : " << accnumber << std::endl;
	std::cout << "잔여금 : " << bal << std::endl;
}

void account::deposit(int money) {
	if (money < 0) {
		std::cerr << "입금 금액이 음수이므로 0으로 설정합니다." << std::endl;
		bal += 0;
		std::cout << accnumber << "계좌에 " << 0 << "를 입금하였습니다. " << std::endl;
	}
	else {
		bal += money;
		std::cout << accnumber << "계좌에 " << money << "를 입금하였습니다. " << std::endl;
	}
}

void account::withdraw(int money){
	if (money > bal)
		std::cerr << "계좌에서 출금할 수 있는 금액보다 많은 금액을 입력하였습니다. " << std::endl;
	else {
		bal -= money;
		std::cout << accnumber << "계좌에 " << money << "를 출금하였습니다. " << std::endl;
	}
}