#include <iostream>
using namespace std;

const int SLEN = 30;
struct student {
	char full[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);

int main() {
	cout << "학급의 학생 수를 입력하십시오: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n') continue;
	
	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++) {
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	cout << "프로그램을 종료합니다.\n";
	return 0;
}

int getinfo(student pa[], int n) {
	int size = 20;
	int NumOfPple = 0;
	for (int i = 0; i < n; i++) {
		cout << "학생 이름 : ";
		cin.getline((pa + i)->full, size);
		if (((pa + i)->full)[0] == ' ') {
			break;
		} //이름 공백 입력 검사기

		cout << "취미 : ";
		cin.getline((pa + i)->hobby, size);

		cout << "OOPLevel : ";
		cin >> (pa + i)->ooplevel;
		cin.get();
		NumOfPple++;
	}
	return NumOfPple;
}
void display1(student st) {
	cout << "Display 1" << endl;
	cout << "	학생 이름\t : " << st.full << endl;
	cout << "	취미\t : " << st.hobby << endl;
	cout << "	OOPLevel : " << st.ooplevel << endl;
}
void display2(const student* ps) {
	cout << "Display 2" << endl;
	cout << "	학생 이름\t : " << ps->full << endl;
	cout << "	취미\t : " << ps->hobby << endl;
	cout << "	OOPLevel : " << ps->ooplevel << endl;
}
void display3(const student pa[], int n) {
	cout << "Display 3" << endl;
	for (int i = 0; i < n; i++) {
		cout << "	학생 이름\t : " << (pa+i)->full << endl;
		cout << "	취미\t : " << (pa+i)->hobby << endl;
		cout << "	OOPLevel : " << (pa + i)->ooplevel << endl;
	}
}
