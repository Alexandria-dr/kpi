x = int(input('enter x='))
n = int(input('enter n='))
den = 1
for i in range(1, n):
    den *= (2*i) * (2*i-1)
    a = x**i/den
    print('\t', a)
