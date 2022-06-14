from lib import *

m = int(input('кількість int = '))
int_array = create_int_array(m)
print(int_array)
print('сума перших цифр цілих чисел = ', sum_first(int_array))

n = int(input('кількість real = '))
real_array = create_real_array(n)
print(real_array)
print('сума останніх цифр раціональних чисел = ', sum_last(real_array))
