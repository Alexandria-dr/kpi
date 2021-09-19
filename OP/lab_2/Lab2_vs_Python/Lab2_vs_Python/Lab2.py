#Завдання:по заданим координатам вершин трикутника на площині визначити 
#тип трикутника (рівносторонній, рівнобедрений, різносторонній).

import math

#Введення координат
Xa=float(input('Введіть координати точки А:\nx = '))
Ya=float(input('y = '))
Xb=float(input('\nВведіть координати точки В:\nx = '))
Yb=float(input('y = '))
Xc=float(input('\nВведіть координати точки С:\nx = '))
Yc=float(input('y = '))

#Обчислення
AB = math.sqrt(pow(Xb - Xa, 2) + pow(Yb - Ya, 2))
BC = math.sqrt(pow(Xc - Xb, 2) + pow(Yc - Yb, 2))
AC = math.sqrt(pow(Xc - Xa, 2) + pow(Yc - Ya, 2))

#перевірка та вивід
print('\nДовжини сторін:\nAB = ',AB,', BC = ',BC,', AC = ',AC,'\n')
if (AB == 0 or BC == 0 or AC == 0):
    print("\nтрикутник не існує\n")
elif (AB == BC == AC):
    print("\nтрикутник рівносторонній\n")
elif (AB == BC or BC == AC or AB == AC):
    print("\nтрикутник рівнобедрений\n")
else:
    print("\nтрикутник різносторонній\n")