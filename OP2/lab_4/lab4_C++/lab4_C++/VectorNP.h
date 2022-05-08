#pragma once
class VectorNP
{
	float x_, y_;
public:
	VectorNP(); //����������� ��� ���������
	VectorNP(float x, float y); //����������� � �����������
	VectorNP(const VectorNP& obj); //����������� ���������
	void SetX(float x); //�������
	void SetY(float y);
	float GetX();  //�������
	float GetY();
	float FindLength();  //����� ���������� ������� �������
	VectorNP operator-(const VectorNP obj);  //�������������� ���������
	VectorNP operator*(int num);
};

