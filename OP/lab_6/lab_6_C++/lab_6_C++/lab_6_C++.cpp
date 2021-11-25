#include <iostream>
#include <cmath>       
using namespace std;

float Taylor(float x, int ep); //��������
int ep, x;


int main()
{
   
    cout << "input x: "; cin >> x;          //��������
    cout << "\ninput epsilon: "; cin >> ep;

    printf("\ny = %.*f\n", ep, Taylor((x), ep));   //��������� 
    cout << "after:" << endl << x << ep;
}

float Taylor(float x, int ep) {     //�������
    float y=0; 
    (x > 0) ? x = atan(x) : (x = pow(x, 2), y = 1);   //����� � ���������� ����������� 
    float fact = 1;
    float franc = 1;
    int i = 1;
    y = 1 + y;
    while (abs(franc)>pow(10,-ep))       //���� � ������
    { 
        fact *= i;
        franc = pow(x, i) / fact;
        i++;
        y += franc;
    }
    return y;     //���������� �������� � ��������
}