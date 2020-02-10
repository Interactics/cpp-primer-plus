#include <iostream>
struct box {
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void print_boxinfo(const box* BOX);		//a
void calcu_volume(box* BOX);	//b

//c
int main() {
	box Box1 = { "Apple", 10.0, 10.0, 10.0 };
	print_boxinfo(&Box1);
	calcu_volume(&Box1);
}

void print_boxinfo(const box* BOX) {
	using namespace std;
	const box* pbox = BOX;
	cout << "BOX 회사 : " << pbox->maker << " 박스 높이 : " << pbox->height << " 박스 길이 : " << pbox->length << " 박스 폭 : " << pbox->width << endl;
}

void calcu_volume(box* BOX) {
	using namespace std;
	box* pbox = BOX;
	pbox->volume = pbox->height * pbox->length * pbox->width;
	cout << "BOX의 부피 : " << pbox->volume << endl;
}
