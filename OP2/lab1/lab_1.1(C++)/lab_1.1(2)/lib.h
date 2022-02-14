#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <Windows.h>
using namespace std;

void createFile(string opFile); //введення тексту в файл
void enterFile(string opFile, vector <string> text); //введення тексту в файл з вектора
void readFile(string opFile); //виведення тексту з файла
vector <string> getText(string from); //запис рядків у вектор
int numOfSymb(string str); //визначення кількості символів у рядку
vector <string> quicksort(vector <string> array); //алгоритм швидкого сортування
vector <string> addSymb(vector <string> array); //додавання кількості символів у кінець рядка