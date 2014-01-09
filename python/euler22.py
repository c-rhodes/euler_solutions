#!/usr/bin/python3

"""
Names scores
Problem 22

http://projecteuler.net/problem=22
"""

from string import ascii_uppercase as upper_al # upper-case alphabet

names = open("names.txt").read().split(",")
n = [x.replace('"', '') for x in names]
n.sort()

total = 0
for x in n:
    wd_sum = 0
    for y in x:
          wd_sum += upper_al.index(y) + 1
    total += wd_sum * (n.index(x) + 1)

print(total)
