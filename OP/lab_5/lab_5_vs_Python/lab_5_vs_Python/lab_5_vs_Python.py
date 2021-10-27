n=int(input("Введіть число n ="))
num=1    #число, яке ми перевіряємо на складність
mersen = 0
print('числа Мерсена не більші за ',n,':')
while mersen<n :
    lich=0
    for i in range(1,num+1,1): #знаходження простих чисел
        ostat=num%i
        if ostat==0:
            lich+=1

    if lich<=2:                 #знаходження числа Мерсена
        mersen=pow(2,num)-1
        if (mersen<n):
            print('\t', mersen)
    num+=1
