from random import randint, uniform
from TIntNumber import TIntNumber
from TRealNumber import TRealNumber

def create_int_array(m):
    int_array = []
    for i in range(0,m):
        int_array.append(TIntNumber(randint(1,1000)))
    return int_array


def create_real_array(n):
    real_array = []
    for i in range(0, n):
        real_array.append(TRealNumber(round(uniform(1.0,1000.0),3)))
    return real_array


def sum_first(arr):
    sum = 0
    for x in arr:
        sum += x.find_first_digit()
    return sum


def sum_last(arr):
    sum = 0
    for x in arr:
        sum += x.find_last_digit()
    return sum
