#!/usr/bin/python3

"""
Power digit sum
Problem 16

215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 21000?
"""

import math

power = pow(2, 1000)
i = 0

while(power != 0):
	i += power % 10
	power //= 10

print(i)
