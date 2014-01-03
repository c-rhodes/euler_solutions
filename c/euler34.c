/*
Digit factorials
Problem 34

145 is a curious number, as 1! + 4! + 5! = 1 + 24 + 120 = 145.

Find the sum of all numbers which are equal to the sum of the factorial of their digits.

Note: as 1! = 1 and 2! = 2 are not sums they are not included.
*/

#include <stdio.h>
#include <stdbool.h>

unsigned long factorial(unsigned long);

int main(int argc, char *argv[])
{
	int i, n, sum, sum2;
	sum = sum2 = 0;

	for(i = 3; i < 1000000; i++)
	{
		n = i;
		while(n != 0)
		{	
			sum += factorial(n % 10);
			n /= 10;
		}
		if(sum == i) sum2 += sum;
		sum = 0;
	}
	printf("%d\n", sum2);
}

unsigned long factorial(unsigned long f)
{
    if ( f == 0 ) 
        return 1;
    return(f * factorial(f - 1));
}
