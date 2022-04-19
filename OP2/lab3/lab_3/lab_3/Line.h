#pragma once
class Line {
public:
	Line(double a, double b, double c);   //конструктор прямої
	double GetA();
	double GetB();
	double GetC();
	bool CheckPoint(double x, double y);  //перевірка чи належить точка прямій
private:
	int a_, b_, c_;  //змінні прямої
};

