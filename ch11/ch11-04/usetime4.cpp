#include <iostream>
#include "mytime4.h"
using namespace std;

int main(){
	Time A;
	Time B(3, 10);
	Time C(1, 5);

	A = B + C;								
	cout << A << endl;
	A = A + C;
	cout << A << endl;

	return 0; 
}
