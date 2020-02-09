#include <iostream>
#include "account.h"

int main() {
	account Jetson("Jetson", "6264010138511", 10000);
	account Skeleton("Skeleton", "1234567890123", 500000);

	Jetson.show();
	Jetson.withdraw(5000);
	Jetson.show();
	Jetson.deposit(50000);
	Jetson.show();
}