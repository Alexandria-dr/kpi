#pragma once
class Line {
public:
	Line(double a, double b, double c);   //����������� �����
	void GetMyLine();  //���� ����� � �������
	bool CheckPoint(double x, double y);  //�������� �� �������� ����� �����
private:
	int a_, b_, c_;  //���� �����
};

