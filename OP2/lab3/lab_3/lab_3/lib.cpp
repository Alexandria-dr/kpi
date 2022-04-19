#include "lib.h"
//=======Введення прямих в масив======
vector<Line> fillArray() {
	vector <Line> lines;
	char flag = 'т';
	int a, b, c;
	while (flag == 'т' || flag == 'Т') {
		cout << "введіть значення a, b, c для прямої (a*x+b*y+c): ";
		cout << "\na = ";  cin >> a;
		cout << "b = ";  cin >> b;
		cout << "c = ";  cin >> c;
		Line ln=Line(a, b, c);
		lines.push_back(ln);   
		cout << "продовжити? (т/н) ";
		cin >> flag;
	}
	return lines;
}

//======видедення прямих в консоль=====
void outputL(vector<Line> lines) {
	cout << "\nвведені прямі:" << endl;
	double a, b, c;
	for (int i = 0; i + 1 <= lines.size(); i++) {
		a = lines[i].GetA();
		b = lines[i].GetB();
		c = lines[i].GetC();
		cout << "пряма " << (i + 1)<<" : ";
		if (b >= 0 && c >= 0) {
			cout << a << "x+" << b << "y+" << c << "=0" << endl;
		}
		else if (b < 0 && c < 0) {
			cout << a << "x" << b << "y" << c << "=0" << endl;
		}
		else if (b < 0 && c>=0) {
			cout << a << "x" << b << "y+" << c << "=0" << endl;
		}
		else {
			cout << a << "x+" << b << "y" << c << "=0" << endl;
		}
	}
}

//======створення точки======
void createP(double& x, double& y) {
	cout << "\nвведіть координати точки (х;у) : " << endl;
	cout << "x = ";  cin >> x;
	cout << "y = ";  cin >> y;
}

//======цикл з перевіркою точок======
void pointsСhecks(vector <Line> lineArray) {
	double x, y;
	char flag = 'т';
	do {
		createP(x, y);
		checkP(x, y, lineArray);
		cout << "\nввести ще одну точку? (т/н)";
		cin >> flag;
	} while (flag == 'т' || flag == 'Т');
}

//======перевірка чи належить точка прямій======
void checkP(double x, double y, vector<Line> lines) {
	int a = 0;
	for (int i = 0; i + 1 <= lines.size(); i++) {
		if (lines[i].CheckPoint(x, y)) {
			if (a == 0) {
				cout << "точка (" << x << ";" << y << ") належить прямим під номером : ";
				a++;
			}
			cout << i + 1 << "; ";
		}
	}
	if (a == 0) {
		cout << "точка (" << x << ";" << y << ") не належить введеним прямим"<<endl;
	}
}