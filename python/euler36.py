#!/usr/bin/python3

"""
Double-base palindromes
Problem 36

The decimal number, 585 = 10010010012 (binary), is palindromic in both bases.

Find the sum of all numbers, less than one million, which are palindromic in base 10 and base 2.

(Please note that the palindromic number, in either base, may not include leading zeros.)
"""

def reverse_int(n):
	count = digit_count(n)
	n_reversed = 0
	while n != 0:
		n_reversed += (n % 10) * (10 ** (count - 1))
		n //= 10
		count = count - 1
	
	return n_reversed

def digit_count(n):
	count = 0
	while n != 0:
		count = count + 1
		n //= 10	
	
	return count

def main():
	sum = 0
	for i in range(1000000):
		i_bin = int(bin(i)[2:]) # i in binary with a deciaml representation for function consistency
		if i == reverse_int(i) and i_bin == reverse_int(i_bin): sum = sum + i
	
	print(sum)

main()
