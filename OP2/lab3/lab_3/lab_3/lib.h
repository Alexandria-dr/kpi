#pragma once
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <vector>
#include "Line.h"
using namespace std;

vector<Line> fillArray(); //Введення прямих в масив
void outputL(vector<Line> lines);  //видедення прямих в консоль
void createP(double& x, double& y);  //створення точки
void checkP(double x, double y, vector<Line> lines);  //перевірка чи належить точка прямій
void pointsСhecks(vector <Line> lineArray);   //цикл з перевіркою точок
