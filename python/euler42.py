#!/usr/bin/python3

"""
Coded triangle numbers
Problem 42

http://projecteuler.net/problem=42
"""

from string import ascii_uppercase as al


words = open("words.txt").read().split(",")
words = [x.replace('"', '') for x in words]

# Maximum triangular word value = 676 (26^2)
# Solve tn = 1/2n(n+1) for tn = 676, therefore n = 36
triangle_numbers = [int(n/2 * (n+1)) for n in range(1, 37)] 

word_value = 0
triangle_word_count = 0
for word in words:
    for ch in word:
        word_value += al.index(ch) + 1
    if word_value in triangle_numbers:
        triangle_word_count += 1

    word_value = 0

print(triangle_word_count)
