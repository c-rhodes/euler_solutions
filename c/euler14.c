/*

Longest Collatz sequence
Problem 14

The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:
13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.

*/

#include <stdio.h>

int collatz(unsigned long long);

int main(int argc, char *argv[])
{
	int k,s,t;
	k = s = t = 0;

	unsigned long long i;	
	for(i = 1; i < 1000000; i++)
	{	
		k = collatz(i);
		if(k > t){
			t = collatz(i);
			s = i;
		}
	}	
	printf("%d\n", s);
	
	return 0;
}

int collatz(unsigned long long n)
{
	int iter = 1;

	while(n != 1){
		if(n % 2 == 0)
			n /= 2;
		else
			n = (n * 3) + 1;

		++iter;
	}
	return iter;
}
