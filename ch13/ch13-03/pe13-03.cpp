//pe13-03.cpp
#include <iostream>
#include <cstdlib>
#include "dmaabc.h"

const int DMA = 4;

int main(){
    using namespace std;
	char in_STR[40] = { };
	char in_Color[40] = { };
	char in_Style[40] = { };

    int in_Rating;
    char kind;
	ABCDMA* p_DMA[DMA] = { nullptr };
    
    for (int i = 0 ; i < DMA; i++){
        cout << "label : ";
        std::cin.getline(in_STR, 40);
		cout << "Rating : ";
		cin >> in_Rating;
        cout << "baseDMA 은 1, lacksDMA은 2, hasDMA은 3을 입력합니다" << endl;

        while (cin >> kind && (kind != '1' && kind != '2' && kind != '3') )
            cout << "1, 2, 3 중 하나를 입력한다: ";
		cin.get();

		switch (kind) {
            case '1' : 
                p_DMA[i] = new baseDMA(in_STR, in_Rating);
                break;

            case '2' :
                cout << "Color : ";
				std::cin.getline(in_Color, 40);
                p_DMA[i] = new lacksDMA(in_Color, in_STR, in_Rating);
                break;

            case '3' :
                cout << "Style : ";
				cin.getline(in_Style, 40);
				p_DMA[i] = new hasDMA(in_Style, in_STR, in_Rating);
                break;
        }           
		cout << endl;
    }
    cout << endl;

    for(int i = 0; i < DMA; i++){
        p_DMA[i] -> view();
        cout << endl;
    }

    for (int i = 0; i < DMA; i++){
        delete[] p_DMA[i];
    }

    cout << "프로그램을 종료합니다. \n";
    
    return 0;
}