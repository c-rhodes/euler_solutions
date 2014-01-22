#!/usr/bin/python3


"""
Lychrel numbers
Problem 55

http://projecteuler.net/problem=55
"""


def palindrome(s):
    if len(s) <= 1:
        return True
    else:
        return palindrome(s[1:-1]) and s[0] == s[-1]


def reverse(s):
    if len(s) <= 1:
        return s
    else:
        return reverse(s[1:]) + s[0]

lychrel_numbers = 0
for i in range(10000):
    iterations = 0
    is_lychrel = True
    chain = i
    while iterations <= 50 and is_lychrel:
        chain += int(reverse(str(chain)))
        if palindrome(str(chain)):
            is_lychrel = False
        iterations += 1
    if is_lychrel:
        lychrel_numbers += 1

print(lychrel_numbers)
