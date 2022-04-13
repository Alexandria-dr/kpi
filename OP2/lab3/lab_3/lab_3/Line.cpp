#include "Line.h"
#include <iostream>
using namespace std;

//=====����������� �����=====
Line::Line(double a, double b, double c) {
	a_ = a;
	b_ = b;
	c_ = c;
}

//======���� ����� � �������=====
void Line::GetMyLine() {
	if(b_>0&&c_>0){
		cout << a_ << "x+" << b_ << "y+" << c_ << "=0" << endl;
	}
	else if (b_ < 0 && c_ < 0) {
		cout << a_ << "x" << b_ << "y" << c_ << "=0" << endl;
	}
	else if (b_ < 0 && c_>0) {
		cout << a_ << "x" << b_ << "y+" << c_ << "=0" << endl;
	}
	else {
		cout << a_ << "x+" << b_ << "y" << c_ << "=0" << endl;
	}
}

//======�������� �� �������� ����� �����=====
bool Line::CheckPoint(double x, double y) {
	if (a_ * x + b_ * y + c_ == 0) {
		return true;
	}
	else {
		return false;
	}
}
