#include <stdio.h>
#include <Windows.h>
#include <math.h> 

int main() {
    SetConsoleOutputCP(1251); //підключення української для консолі

    double Xa, Ya, Xb, Yb, Xc, Yc, AB, BC, AC; //оголошення змінних

   //введення і призначення значень змінним
    printf("Введіть координати точки А:\nx = ");
    scanf_s("%lf", &Xa);

    printf("y = ");
    scanf_s("%lf", &Ya);

    printf("\nВведіть координати точки В:\nx = ");
    scanf_s("%lf", &Xb);

    printf("y = ");
    scanf_s("%lf", &Yb);

    printf("\nВведіть координати точки С:\nx = ");
    scanf_s("%lf", &Xc);

    printf("y = ");
    scanf_s("%lf", &Yc);

    //обчислення
    AB = sqrt(pow(Xb - Xa, 2) + pow(Yb - Ya, 2));
    BC = sqrt(pow(Xc - Xb, 2) + pow(Yc - Yb, 2));
    AC = sqrt(pow(Xc - Xa, 2) + pow(Yc - Ya, 2));

    //перевірка та вивід
    printf("\nДовжини сторін:\nAB = %g, BC = %g, AC = %g\n", AB, BC, AC);

    if (AB == 0 || BC == 0 || AC == 0) {
        printf("\nтрикутник не існує\n");
    }
    else if (AB == BC == AC) {
        printf("\nтрикутник рівносторонній\n");
    }
    else if (AB == BC || BC == AC || AB == AC) {
        printf("\nтрикутник рівнобедрений\n");
    }
    else {
        printf("\nтрикутник різносторонній\n");
    }
}
