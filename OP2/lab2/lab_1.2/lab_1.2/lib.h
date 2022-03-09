#pragma once
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctime>
#include <Windows.h>
#include <fstream>
#include <string>
using namespace std;

struct TimeVisit {
    int day, month, year;
};
struct Patient {
    char pib[100];
    TimeVisit pVisit, fVisit;

};

void createKatalog(string name); //��������� �������� ����� 
void outputKatalog(string name); //��������� ����� � �������
void copyFile(string name); //��������� �������� �����
void createNewKatalogs(string name); //���������� �������� �� ������
void cleanKatalog(string name); //������� ������, �� ��� ��������
void deleteFile(string name); //�������� �����