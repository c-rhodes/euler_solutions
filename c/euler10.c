/*

Summation of primes
Problem 10

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.

*/

#include <math.h>
#include <stdio.h>
#include <stdbool.h>

int is_prime(int);

int main(int argc, char *argv[])
{
	int i;
	long sum = 0;

	for(i = 2; i < 2000000; i++)
		if(is_prime(i)) sum += i;

	printf("%ld\n", sum);

	return 0;
}

int is_prime(int n)
{
	if(n > 2 && n % 2 == 0) return false;

	int i;
	for(i = 2; i <= (int) sqrt(n); i++)
		if(n % i == 0) return false;

	return true;
}

