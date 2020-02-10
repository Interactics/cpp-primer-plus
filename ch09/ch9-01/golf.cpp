#include <iostream>
#include <cstring>
#include "golf.h"

void setgolf(golf& g, const char* name, int hc){
	strcpy_s(g.fullname,20 ,name);
	g.handicap = hc;
}
int setgolf(golf& g){
	extern const int Len;
	using namespace std;

	cout << "----SET GOLF-----" << endl;
	cout << "이름 : ";
	cin.getline(g.fullname, Len);
	if (g.fullname[0] == ' ')
		return 0;

	cout << "핸디캡 : ";
	cin >> g.handicap;
	cin.get();

	return 1;
}
void handicap(golf& g, int hc) {
	using namespace std;

	cout << "----핸디캡 설정----" << endl;
	cout << "핸디캡 설정 : "<< hc << endl<< endl;
	g.handicap = hc;

}
void showgolf(const golf& g) {
	using namespace std;

	cout << "----출력----" << endl;
	cout << "이름 : " << g.fullname << endl;
	cout << "핸디캡 " << g.handicap << endl<<endl;
}
