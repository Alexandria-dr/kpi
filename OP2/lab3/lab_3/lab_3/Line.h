#pragma once
class Line {
public:
	Line(double a, double b, double c);   //конструктор прямої
	void GetMyLine();  //вивід прямої в консоль
	bool CheckPoint(double x, double y);  //перевірка чи належить точка прямій
private:
	int a_, b_, c_;  //змінні прямої
};

