#include <stdio.h>
#include <Windows.h>
#include <math.h> 

int main() {
    SetConsoleOutputCP(1251); //���������� ��������� ��� ������

    double Xa, Ya, Xb, Yb, Xc, Yc, AB, BC, AC; //���������� ������

   //�������� � ����������� ������� ������
    printf("������ ���������� ����� �:\nx = ");
    scanf_s("%lf", &Xa);

    printf("y = ");
    scanf_s("%lf", &Ya);

    printf("\n������ ���������� ����� �:\nx = ");
    scanf_s("%lf", &Xb);

    printf("y = ");
    scanf_s("%lf", &Yb);

    printf("\n������ ���������� ����� �:\nx = ");
    scanf_s("%lf", &Xc);

    printf("y = ");
    scanf_s("%lf", &Yc);

    //����������
    AB = sqrt(pow(Xb - Xa, 2) + pow(Yb - Ya, 2));
    BC = sqrt(pow(Xc - Xb, 2) + pow(Yc - Yb, 2));
    AC = sqrt(pow(Xc - Xa, 2) + pow(Yc - Ya, 2));

    //�������� �� ����
    printf("\n������� �����:\nAB = %g, BC = %g, AC = %g\n", AB, BC, AC);

    if (AB == 0 || BC == 0 || AC == 0) {
        printf("\n��������� �� ����\n");
    }
    else if (AB == BC == AC) {
        printf("\n��������� ������������\n");
    }
    else if (AB == BC || BC == AC || AB == AC) {
        printf("\n��������� ������������\n");
    }
    else {
        printf("\n��������� ������������\n");
    }
}
