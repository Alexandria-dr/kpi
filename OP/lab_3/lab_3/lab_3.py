#введення змінних
a = int(input('Enter a = '))
x = float(input('Enter (-1<x<1) x =')) 

#надання деяким змінним значень і типів 
k=1
sum=1
den=float(1)
frac=float(1)
partNum=float(a*(a-1)) 

#ітераційний цикл знаходження суми з умовою зупинки
while (abs(frac)>10**-5):
    partNum*=(a-(k+1))          #частина чисельника
    den=den*k                   #знаменник
    frac=(partNum*x**k)/den     #дріб
    sum+=frac                   #сума
    k+=1                        #лічильник 

#виведення результатів
print('\nsum = ',sum)
