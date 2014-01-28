#!/usr/bin/python3

from itertools import chain
from math import sqrt, log10


"""
Truncatable primes
Problem 37

http://projecteuler.net/problem=37
"""

def isprime(n):
    if n > 2 and n % 2 == 0 or n == 1:
        return False

    for i in range(2, int(sqrt(n)) + 1):
        if not n % i:
            return False
    return True


def r(n):
    for i in ['0', '4', '6', '8']:
        if i in str(n):
            return False
    return True


def ltor(n):
    len_n = int(log10(n)) + 1
    while len_n > 0:
        yield n % (10**(len_n))
        len_n -= 1


def rtol(n):
    len_n = int(log10(n)) + 1
    i = 0 
    for i in range(len_n):
        yield n // (10**(i))

primes = [p for p in filter(isprime, filter(r, range(9, 10**6, 2)))]
count = 0

for p in primes:
    truncatable = True
    
    g = set(chain(ltor(p), rtol(p)))
    for i in g:
        if not isprime(i):
            truncatable = False
            break

    if truncatable:
        count += p

print(count)
