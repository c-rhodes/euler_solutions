#!/usr/bin/python3

from isprime import isprime
from math import log10

def prime_filter(n):
    for i in ['0']:
        if i in str(n):
            return False
    return True

def pandigital_filter(n):
    len_n = int(log10(n)) + 1
    str_n = str(n)
    digit_counts = {i:None for i in range(1,len_n+1)}
    for i in range(1,len_n+1):
        if str(i) not in str_n:
            return False
        else:
            if digit_counts[i] != None:
                return False
        digit_counts[i] = 1

    return True

primes = [p for p in filter(isprime, filter(pandigital_filter, filter(prime_filter, range(10**6+1, 10**7, 2))))]

print(primes[-1])
