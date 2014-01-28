#!/usr/bin/python3

"""
Permuted multiples
Problem 52

http://projecteuler.net/problem=52
"""

import itertools


def filter_n(n):
    if '0' in str(n):
        return False
    return True

numbers = [i for i in filter(filter_n, range(125872,1000000))]

for x in numbers:
    b = True
    g = [int(''.join(i)) for i in itertools.permutations(str(x))]
    x2 = [x*i for i in range(2,7)]

    for i in x2:
        if i not in g:
            b = False
            break

    if b:
        print(x)
        break
