#завдання: по заданим коефіцєнтам і правим частинам рівняння системи знайти її рішення
#крок 1: вводимо дані
a1=float(input('Введіть значення коефіцієнтів:\na1 = '))
b1=float(input('b1 = '))
a2=float(input('a2 = '))
b2=float(input('b2 = '))
c1=float(input('\nВведіть значення правих частин рівняння:\nc1 = '))
c2=float(input('c2 = '))
#крок 2: обчислюємо
x=(c1*b2-c2*b1)/(a1*b2-a2*b1)
y=(c2*a1-c1*a2)/(a1*b2-a2*b1)
#крок 3: виводимо результат
print('\nРезультат:\nx = ',x,'\ny = ',y,'\n')
