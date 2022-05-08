#include <iostream>
#include "VectorNP.h"
#include "Header.h"
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    float x=0, y=0;

    SetXY(x, y);
    VectorNP V1(x, y);    //створення через конструктор з параметрами 
    V1 = V1 * 2;

    VectorNP V2;          //створення через конструктор без параметрів
    SetXY(x, y);          //параметри задаємо сеттерами
    V2.SetX(x); V2.SetY(y);

    VectorNP V3 = V1 - V2;    //створення через конструктор копіювання
    cout << "\nдовжина вектора V3 = " << V3.FindLength()<<endl;
    
}
