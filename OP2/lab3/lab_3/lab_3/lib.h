#pragma once
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <vector>
#include "Line.h"
using namespace std;

vector<Line> fillArray(); //�������� ������ � �����
void outputL(vector<Line> lines);  //��������� ������ � �������
void createP(double& x, double& y);  //��������� �����
void checkP(double x, double y, vector<Line> lines);  //�������� �� �������� ����� �����
void points�hecks(vector <Line> lineArray);   //���� � ��������� �����
