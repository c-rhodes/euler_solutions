#!/usr/bin/python3

"""
Circular primes
Problem 35

http://projecteuler.net/problem=35
"""

import math


def r(n):
    for i in ['0','2','4','5','6','8']:
        if i in str(n):
            return False
    return True

def isprime(n):
    if n < 2 and n % 2 == 0:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False

    return True

def generate_circle_int(n):
    l = list(str(n))
    for i in l:
        temp = l[0]
        l = l[1:]
        l.append(temp)
        yield int(''.join(l))

primes = [p for p in filter(generate_circle_int, filter(isprime, filter(r, range(3,10**6,2))))]
primes.append(2)
primes.append(5)

circular_primes = 0
for i in primes:
    b = True
    for p in generate_circle_int(i):
        if not isprime(p):
            b = False
            break
    if b:
        circular_primes += 1

print(circular_primes)
