#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;

int myLen(string);	//������� �����
void findSingle(string, int);	//����������� �������, �� ������������ 1 ���

int main(){
	string str; int len;
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "������ �����:" << endl;
	getline(cin, str);
	len = myLen(str);
	findSingle(str, len);
}

int myLen(string s) {         //������� �����
	int i = 0;
	while (s[i]) i++;
	return i;
}

void findSingle(string str, int len) {          //����������� �������, �� ������������ 1 ���
	int b; //�����, � ��� ���������� ������� ������� ������� � �����
	for (int i = 0; i < len; i++) {
		b = 0;
		for (int j = 0; j < len; j++) {
			if (str[i] == str[j]) b++;
		}
		if (b == 1) cout << "������: " << str[i] << "\t�������: " << i + 1 << endl;
	}
}