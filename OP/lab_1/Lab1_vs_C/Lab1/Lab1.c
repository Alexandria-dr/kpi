//��������: �� ������� ����������� � ������ �������� ������� ������� ������ �� ������

#include <stdio.h>
#include <Windows.h>

int main() {
    SetConsoleOutputCP(1251); //���������� ��������� ��� ������

    float a1, a2, b1, b2, c1, c2, x, y; //���������� ������

   //��� � ����������� ������� ������
    printf("������ �������� �����������:\na1 = ");          
    scanf_s("%g", &a1);

    printf("b1 = ");
    scanf_s("%g", &b1);

    printf("a2 = ");
    scanf_s("%g", &a2);

    printf("b2 = ");
    scanf_s("%g", &b2);

    printf("\n������ �������� ������ ������ �������:\nc1 = ");
    scanf_s("%g", &c1);

    printf("c2 = ");
    scanf_s("%g", &c2);

    //����������
    y = (c1 * b2 - c2 * b1) / (a1 * b2 - a2 * b1);
    x = (c2 * a1 - c1 * a2) / (a1 * b2 - a2 * b1);

    //����
    printf("\n���������:\nx = %g,\ny = %g\n",y, x);
}