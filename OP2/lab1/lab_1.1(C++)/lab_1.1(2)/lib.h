#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <Windows.h>
using namespace std;

void createFile(string opFile); //�������� ������ � ����
void enterFile(string opFile, vector <string> text); //�������� ������ � ���� � �������
void readFile(string opFile); //��������� ������ � �����
vector <string> getText(string from); //����� ����� � ������
int numOfSymb(string str); //���������� ������� ������� � �����
vector <string> quicksort(vector <string> array); //�������� �������� ����������
vector <string> addSymb(vector <string> array); //��������� ������� ������� � ����� �����