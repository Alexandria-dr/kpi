def fib(i):
    if (i == 0):
        res = 0
    elif (i == 1):
        res = 1
    else:
        res = (fib(i-1) + fib(i-2))
    return res

n = int(input("введіть кількість чисел: "))
i = 0
for i in range(0, n, 1):
    print(fib(i), end=' ')
