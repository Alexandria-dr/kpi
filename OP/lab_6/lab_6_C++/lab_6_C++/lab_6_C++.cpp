#include <iostream>
#include <cmath>       
using namespace std;

float Taylor(float x, int ep, float y);
int ep, x;

int main()
{
    cout << "enter x: "; cin >> x ;
    cout << "\nenter epsilon: "; cin >> ep ;

    if (x > 0)  printf("\ny = %.*f\n", ep, Taylor((atan(x)), ep, 0));
    else   printf("\ny = %.*f\n", ep, Taylor((pow(x, 2)), ep, 1));
}

float Taylor(float x, int ep, float y) {
    float fact = 1;
    float franc = 1;
    int i = 1;
    y = 1 + y;
    while (abs(franc)>pow(10,-ep))
    {
        fact *= i;
        franc = pow(x, i) / fact;
        i++;
        y += franc;
    }
    return y;
}