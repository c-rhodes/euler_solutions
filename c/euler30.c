/*
Digit fifth powers
Problem 30

Surprisingly there are only three numbers that can be written as the sum of fourth powers of their digits:

    1634 = 14 + 64 + 34 + 44
    8208 = 84 + 24 + 04 + 84
    9474 = 94 + 44 + 74 + 44

As 1 = 14 is not a sum it is not included.

The sum of these numbers is 1634 + 8208 + 9474 = 19316.

Find the sum of all the numbers that can be written as the sum of fifth powers of their digits.
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int i, n, sum, sum2;
	sum = sum2 = 0;

	for(i = 2; i < 1000000; i++)
	{
		n = i;
		while(n != 0)
		{
			sum += pow((n % 10), 5);
			n /= 10;
		}
		if(sum == i) sum2 += sum;	
		sum = 0;
	}
	printf("%d\n", sum2);
	return 0;
}
