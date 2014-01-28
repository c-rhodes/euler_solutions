#!/usr/bin/python3

"""
Powerful digit sum
Problem 56

http://projecteuler.net/problem=56
"""

largest = 0
for a in range(1,100):
    for b in range(1,100):
        s = sum(int(i) for i in str(a**b))
        if s > largest:
            largest = s

print(largest)
