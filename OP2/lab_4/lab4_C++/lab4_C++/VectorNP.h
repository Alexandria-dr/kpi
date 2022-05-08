#pragma once
class VectorNP
{
	float x_, y_;
public:
	VectorNP(); //конструктор без параметрів
	VectorNP(float x, float y); //конструктор з параметрами
	VectorNP(const VectorNP& obj); //конструктор копіювання
	void SetX(float x); //сеттери
	void SetY(float y);
	float GetX();  //геттери
	float GetY();
	float FindLength();  //метод обчислення довжини вектора
	VectorNP operator-(const VectorNP obj);  //перевантаження операторів
	VectorNP operator*(int num);
};

