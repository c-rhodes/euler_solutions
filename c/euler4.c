/*

Largest palindrome product
Problem 4

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/

#include <stdio.h>
#include <string.h>

int reverse_int(int);

int main(int argc, char *argv[])
{	
	int i, k, t;
	int largest = 0;
	
	for(i = 100; i <= 999; i++)
	{
		for(k = 100; k <= 999; k++)
		{
			t = reverse_int(k * i);	
			if(t == (k * i) && t > largest)
				largest = t;
		}
	}
	printf("%d\n", largest);
	
	return 0;
}

int reverse_int(int n)
{
	int k = 0;

	while(n != 0)
	{
		k *= 10;
		k  = k + n % 10;
		n /= 10;
	}
	return k;
}
