#include "lib.h"
//=======�������� ������ � �����======
vector<Line> fillArray() {
	vector <Line> lines;
	char flag = '�';
	int a, b, c;
	while (flag == '�' || flag == '�') {
		cout << "������ �������� a, b, c ��� ����� (a*x+b*y+c): ";
		cout << "\na = ";  cin >> a;
		cout << "b = ";  cin >> b;
		cout << "c = ";  cin >> c;
		Line *ln=new Line(a, b, c);
		lines.push_back(*ln);   
		cout << "����������? (�/�) ";
		cin >> flag;
	}
	return lines;
}

//======��������� ������ � �������=====
void outputL(vector<Line> lines) {
	cout << "\n������ ����:" << endl;
	for (int i = 0; i + 1 <= lines.size(); i++) {
		cout << "����� " << (i + 1)<<" : ";
		lines[i].GetMyLine();
	}
}

//======��������� �����======
void createP(double& x, double& y) {
	cout << "\n������ ���������� ����� (�;�) : " << endl;
	cout << "x = ";  cin >> x;
	cout << "y = ";  cin >> y;
}

//======���� � ��������� �����======
void points�hecks(vector <Line> lineArray) {
	double x, y;
	char flag = '�';
	do {
		createP(x, y);
		checkP(x, y, lineArray);
		cout << "\n������ �� ���� �����? (�/�)";
		cin >> flag;
	} while (flag == '�' || flag == '�');
}

//======�������� �� �������� ����� �����======
void checkP(double x, double y, vector<Line> lines) {
	int a = 0;
	for (int i = 0; i + 1 <= lines.size(); i++) {
		if (lines[i].CheckPoint(x, y)) {
			if (a == 0) {
				cout << "����� (" << x << ";" << y << ") �������� ������ �� ������� : ";
				a++;
			}
			cout << i + 1 << "; ";
		}
	}
	if (a == 0) {
		cout << "����� (" << x << ";" << y << ") �� �������� �������� ������"<<endl;
	}
}
