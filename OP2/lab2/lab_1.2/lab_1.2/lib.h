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

void createKatalog(string name); //створення бінарного файлу 
void outputKatalog(string name); //виведення файлу в консоль
void copyFile(string name); //копіювання бінарного файлу
void createNewKatalogs(string name); //сортування пацієнтів по файлах
void cleanKatalog(string name); //очищаємо записи, які вже відбулися
void deleteFile(string name); //очищення файлу