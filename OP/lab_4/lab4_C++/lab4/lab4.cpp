#include <iostream>
#include<cmath>
#include <clocale>

int main()
{
    setlocale(LC_CTYPE, "ukr"); //���������� �������� � ������

    int n = 1, den = 1;     //����������� ������  
    float x, a;

    using namespace std;

    cout << "����i�� �i���i��� �������i� ����i�������i n=";
    cin >> n;
    cout << "����i�� x=";
    cin >> x;

    for (int i = 1; i < (n+1); i++)     //���� � ���������� (���������� ������ �������� ������ �� n+1)
    {
        den *= (2 * i) * ((2*i)-1);                  //��������� ��������
        a = pow(x,i)/den;                            //������� �����������
        cout << "n=" << i << "; an=" << a << endl;   //��������� ��������
    }
}
