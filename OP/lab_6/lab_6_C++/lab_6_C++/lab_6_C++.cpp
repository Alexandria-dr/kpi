#include <iostream>
#include <cmath>       
using namespace std;

float Taylor(float x, int ep); //прототип
int ep, x;


int main()
{
   
    cout << "input x: "; cin >> x;          //введення
    cout << "\ninput epsilon: "; cin >> ep;

    printf("\ny = %.*f\n", ep, Taylor((x), ep));   //виведення 
    cout << "after:" << endl << x << ep;
}

float Taylor(float x, int ep) {     //функція
    float y=0; 
    (x > 0) ? x = atan(x) : (x = pow(x, 2), y = 1);   //умова з тернарними операторами 
    float fact = 1;
    float franc = 1;
    int i = 1;
    y = 1 + y;
    while (abs(franc)>pow(10,-ep))       //цикл з умовою
    { 
        fact *= i;
        franc = pow(x, i) / fact;
        i++;
        y += franc;
    }
    return y;     //повернення значення у функцією
}