def fib(i):
    if (i == 0):
        return 0
    elif (i == 1):
        return 1
    else:
        return fib(i-1) + fib(i-2)


i = 0
for i in range(0, 10, 1):
    print(fib(i), end=' ')
