#include "Line.h"
#include <iostream>
using namespace std;

//=====конструктор прямої=====
Line::Line(double a, double b, double c) {
	a_ = a;
	b_ = b;
	c_ = c;
}

//======гетери======
double Line::GetA() {
	return a_;
}
double Line::GetB() {
	return b_;
}
double Line::GetC() {
	return c_;
}

//======перевірка чи належить точка прямій=====
bool Line::CheckPoint(double x, double y) {
	if (a_ * x + b_ * y + c_ == 0) {
		return true;
	}
	else {
		return false;
	}
}
