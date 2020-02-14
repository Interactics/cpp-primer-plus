#include <cmath>
#include "vect1.h"
using std::sqrt;
using std::sin;
using std::cos;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR {
	const double Rad_to_deg = 45.0 / atan(1.0);

	double Vector::xval() const {
		if (mode != RECT)
			return x * cos(y);
		return x;
	}

	double Vector::yval() const {
		if (mode != RECT)
			return  x * sin(y);
		return y; 
	}

	double Vector::magval() const {
		if (mode != POL)
			return sqrt(x * x + y * y);
		return x;
	}
	double Vector::angval() const {
		if (mode != POL)
			return atan2(y, x);
		return y;
	}

	double Vector::set_mag() {
		return sqrt(x * x + y * y);

	}
	double Vector::set_ang() {
		if (x == 0.0 and y == 0.0) 
			return 0.0;

		return atan2(y, x);
	}

	double Vector::set_x() {
		return x * cos(y);
	}
	double Vector::set_y() {
		return x * sin(y);
	}

	Vector::Vector() {
		mode = RECT;
	}

	Vector::Vector(double n1, double n2, Mode form) {
		mode = form;

		if (form == RECT) {
			x = n1;
			y = n2;
		}
		else if (form == POL) {
			x = n1;
			y = n2 / Rad_to_deg;
		}
		else {
			cout << "Vector()에 전달되 제3의 매개변수가 잘못되었다. \n";
			cout << "그래서 벡터를 0으로 설정하였다. \n";
			x = y = 0.0;
			mode = RECT;
		}
	}

	void Vector::reset(double n1, double n2, Mode form) {
		mode = form;
		if (form == RECT) {
			x = n1;
			y = n2;
		}
		else if (form == POL) {
			x = n1;
			y = n2 / Rad_to_deg;
		}
		else {
			cout << "Vcector()에 전달된 제 3의 매개변수가 잘못되었습니다. \n";
			cout << "그래서 벡터를 0으로 설정하였다. \n";
			x = y = 0.0;
			mode = RECT;
		}
	}
	Vector::~Vector() {}

	void Vector::polar_mode() {
		double temp_x, temp_y;

		if (mode == RECT) {
			temp_x = set_mag();
			temp_y = set_ang();

			x = temp_x;
			y = temp_y;
			mode = POL;
		}
	}

	void Vector::rect_mode() {
		double temp_x, temp_y;

		if (mode == POL) {
			temp_x = set_x();
			temp_y = set_y();

			x = temp_x;
			y = temp_y;
			mode = RECT;
		}
	}

	Vector Vector::operator+(const Vector& b) const {
		Vector temp = b;

		if (mode == b.mode)
			return Vector(x + b.x, y + b.y, mode);
		else
			if (mode == RECT) {
				temp.rect_mode();
				return Vector(x + temp.x, y + temp.y, RECT);
			}
			else {
				temp.polar_mode();
				return Vector(x + temp.x, y + temp.y, POL);
			}
	}

	Vector Vector::operator-(const Vector& b) const {
		Vector temp = b;

		if (mode == b.mode)
			return Vector(x - b.x, y - b.y, mode);
		else
			if (mode == RECT) {
				temp.rect_mode();
				return Vector(x - temp.x, y - temp.y, RECT);
			}
			else {
				temp.polar_mode();
				return Vector(x - temp.x, y - temp.y, POL);
			}
	}

	Vector Vector::operator-() const {
		return Vector(-x, -y);
	}

	Vector Vector::operator*(double n) const {
		return Vector(n * x, n * y);
	}

	Vector operator*(double n, const Vector& a) {
		return a * n;
	}

	std::ostream& operator<<(std::ostream& os, const Vector& v) {
		if (v.mode == Vector::RECT)
			os << "(x,y) = (" << v.x << ", " << v.y << ")";
		else if (v.mode == Vector::POL) {
			os << "(m,a) = (" << v.x << ", " << v.y * Rad_to_deg << ")";
		}
		else
			os << " Vector 객체의 모드 지정이 틀렸습니다. \n";
		return os;
	}
}