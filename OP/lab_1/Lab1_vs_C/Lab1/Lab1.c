//��������: �� ������� ����������� � ������ �������� ������� ������� ������ �� ������

#include <stdio.h>


int main() {
    double a1, a2, b1, b2, c1, c2, x, y; //���������� ������

   //��� � ����������� ������� ������
    printf("a1 = ");          
    scanf_s("%lf", &a1);

    printf("b1 = ");
    scanf_s("%lf", &b1);

    printf("a2 = ");
    scanf_s("%lf", &a2);

    printf("b2 = ");
    scanf_s("%lf", &b2);

    printf("c1 = ");
    scanf_s("%lf", &c1);

    printf("c2 = ");
    scanf_s("%lf", &c2);

    //����������
    y = (c1 * b2 - c2 * b1) / (a1 * b2 - a2 * b1);
    x = (c2 * a1 - c1 * a2) / (a1 * b2 - a2 * b1);

    //����
    printf("x = %lf,\n y = %lf",y, x);
}