import math

def Taylor(x,ep,y):
    i = 1
    franc = 1
    fact = 1
    y=1+y
    while (abs(franc) > 10**-ep):
        fact*=i
        franc = pow(x, i)/fact
        i += 1
        y += franc
    return y

x = int(input('введіть значення х: '))
ep = int(input('введіть точність: '))
if x > 0:
    print('значення у = %.*f '%(ep,Taylor(math.atan(x),ep,0)))
else:
    print('значення у = %.*f '%(ep,Taylor(pow(x,2),ep,1)))
