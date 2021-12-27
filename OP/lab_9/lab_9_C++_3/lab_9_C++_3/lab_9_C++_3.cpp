#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;

int myLen(string);	//довжина рядка
void findSingle(string, int);	//знаходження символів, які повторюються 1 раз

int main(){
	string str; int len;
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "введіть рядок:" << endl;
	getline(cin, str);
	len = myLen(str);
	findSingle(str, len);
}

int myLen(string s) {         //довжина рядка
	int i = 0;
	while (s[i]) i++;
	return i;
}

void findSingle(string str, int len) {          //знаходження символів, які повторюються 1 раз
	int b; //змінна, в якій зберігається кількість повторів символа в рядку
	for (int i = 0; i < len; i++) {
		b = 0;
		for (int j = 0; j < len; j++) {
			if (str[i] == str[j]) b++;
		}
		if (b == 1) cout << "Символ: " << str[i] << "\tПозиція: " << i + 1 << endl;
	}
}