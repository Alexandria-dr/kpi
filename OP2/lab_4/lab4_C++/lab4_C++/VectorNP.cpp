#include "VectorNP.h"
#include <cmath>
#include <iostream>

//����������� ��� ���������
VectorNP::VectorNP() {
	x_ = 0;
	y_ = 0;
}

//����������� � �����������
VectorNP::VectorNP(float x, float y) {
	x_ = x;
	y_ = y;
}

//����������� ���������
VectorNP::VectorNP(const VectorNP& obj) {
	x_ = obj.x_;
	y_ = obj.y_;
}

//�������
void VectorNP::SetX(float x) {
	x_ = x;
}
void VectorNP::SetY(float y) {
	y_ = y;
}

//�������
float VectorNP::GetX() {
	return x_;
}
float VectorNP::GetY() {
	return y_;
}

//����� ���������� ������� �������
float VectorNP::FindLength() {
	return sqrt((x_ * x_) + (y_ * y_));
}

//�������������� ��������� �������� -
VectorNP VectorNP::operator-(const VectorNP obj) {
	VectorNP tmp(0,0);
	tmp.x_ = x_-obj.x_;
	tmp.y_ = y_ - obj.y_;
	std::cout<<"\n���������� ������� ���� �������� = (" << tmp.GetX() << ";" << tmp.GetY() << ")\n";
	return tmp;
}
//�������������� ��������� ��������� *
VectorNP VectorNP::operator*(int num) {
	VectorNP tmp(0, 0);
	tmp.x_ = x_ * num;
	tmp.y_ = y_ * num;
	std::cout << "\n������ �������� � "<<num<<" ���� \n���������� ������� = ("<<tmp.GetX()<<";"<<tmp.GetY()<<")\n";
	return tmp;
}
