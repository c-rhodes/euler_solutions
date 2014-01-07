#!/usr/bin/python3

"""
Combinatoric selections
Problem 53

http://projecteuler.net/problem=53
"""

from math import factorial

def nCr(n,r):
    return factorial(n) / (factorial(r) * factorial(n-r))

count = 0
for n in range(101):
    for r in range(n):
        if nCr(n, r) > 1000000:
            count = count + 1

print(count)
