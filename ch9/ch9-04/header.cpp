#include <iostream>
#include "header.h"

namespace SALES{

	void setSales(Sales& s, const double ar[], int n) {
		double M, m, avg, sum = 0;
		double temp_m = ar[0], temp_M = ar[0];

		if (n > 4) n = 4;

		for (int i = 0; i < 4; i++) {
			if(i < n) s.sales[i] = ar[i];
			else s.sales[i] = 0;

			M = s.sales[i] > temp_M ? s.sales[i] : temp_M;
			m = s.sales[i] < temp_m ? s.sales[i] : temp_m;
			sum += s.sales[i];
		}

		sum /= n;

		s.max = M;
		s.min = m;
		s.average = sum;
	}

	void setSales(Sales& s) {
		using std::cin;
		using std::cout;
		using std::endl;

		int N = 4;
		double M, m, avg, sum = 0;

		for (int i = 0; i < N; i++) {
			cout << i << "분기 판매액 : " << endl;
			cin >> s.sales[i];
		}

		double temp_m = s.sales[0], temp_M = s.sales[0];
		while (N--) {
			M = s.sales[N] > temp_M ? s.sales[N] : temp_M;
			m = s.sales[N] < temp_m ? s.sales[N] : temp_m;
			sum += s.sales[N];
		}
		sum /= N;

		s.max = M;
		s.min = m;
		s.average = sum;
	}

	void showSales(const Sales& s) {
		using std::cin;
		using std::cout;
		using std::endl;

		for (int i = 0; i < 4; i++) {
			cout << i << "분기 매출 : " << s.sales;
		}
		cout << "평균값 : " << s.average;
		cout << "최소값 : " << s.min;
		cout << "최대값 : " << s.max;
	}
}
