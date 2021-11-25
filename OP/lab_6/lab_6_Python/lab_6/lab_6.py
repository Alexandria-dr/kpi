import math
 
def Taylor(x,ep):           # Функція
    y = 1 if x>0 else 2    #знаходження у тернарними операторами 
    x = math.atan(x) if x>0 else pow(x,2)   #знаходження х тернарними операторами
    i = 1
    franc = 1
    fact = 1
    while (abs(franc) > 10**-ep):    #цикл з передумовою 
        fact*=i
        franc = pow(x, i)/fact
        i += 1
        y += franc
    return y  #повернення значення у функцією 

x = float(input('введіть значення х: '))     #введення чисел
ep = int(input('введіть цілу точність: '))
print('значення у = %.*f '%(ep,Taylor(x,ep)))   #виведення результату