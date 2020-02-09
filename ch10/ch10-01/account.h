#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <string>
class account {
private:
	std::string name;
	std::string accnumber;	 //계좌번호 13자리
	int bal;			 //잔액

public:
	account();
	account(const std::string& NAME, const char* ACC_NUM, int MONEY = 0);
	~account();
	void show() const;
	void deposit(int money);
	void withdraw(int money);
};
#endif