#!/usr/bin/python3

"""
Lattice paths
Problem 15

Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.

How many such routes are there through a 20×20 grid?
"""

import math

n = 40
r = 20
x = math.factorial(n) / (math.factorial(n - r) * math.factorial(r))

print(x)
