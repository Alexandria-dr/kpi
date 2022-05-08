#include "VectorNP.h"
#include <cmath>
#include <iostream>

//конструктор без параметрів
VectorNP::VectorNP() {
	x_ = 0;
	y_ = 0;
}

//конструктор з параметрами
VectorNP::VectorNP(float x, float y) {
	x_ = x;
	y_ = y;
}

//конструктор копіювання
VectorNP::VectorNP(const VectorNP& obj) {
	x_ = obj.x_;
	y_ = obj.y_;
}

//сеттери
void VectorNP::SetX(float x) {
	x_ = x;
}
void VectorNP::SetY(float y) {
	y_ = y;
}

//геттери
float VectorNP::GetX() {
	return x_;
}
float VectorNP::GetY() {
	return y_;
}

//метод обчислення довжини вектора
float VectorNP::FindLength() {
	return sqrt((x_ * x_) + (y_ * y_));
}

//перевантаження оператора віднімання -
VectorNP VectorNP::operator-(const VectorNP obj) {
	VectorNP tmp(0,0);
	tmp.x_ = x_-obj.x_;
	tmp.y_ = y_ - obj.y_;
	std::cout<<"\nкоординати вертора після віднімання = (" << tmp.GetX() << ";" << tmp.GetY() << ")\n";
	return tmp;
}
//перевантаження оператора збільшення *
VectorNP VectorNP::operator*(int num) {
	VectorNP tmp(0, 0);
	tmp.x_ = x_ * num;
	tmp.y_ = y_ * num;
	std::cout << "\nвектор збільшено в "<<num<<" рази \nкоординати вектора = ("<<tmp.GetX()<<";"<<tmp.GetY()<<")\n";
	return tmp;
}
