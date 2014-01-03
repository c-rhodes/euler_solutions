/*

10001st prime
Problem 7

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?

*/

#include <math.h>
#include <stdio.h>
#include <stdbool.h>

int is_prime(int);

int main(int argc, char *argv[])
{
	int i;
	int prime_count = 0;

	for(i = 2; prime_count < 10001; i++)
	{
		if(is_prime(i)){
			++prime_count;
		}
	}
	printf("%d\n", i-1);
}

int is_prime(int n)
{
	if(n > 2 && n % 2 == 0) return false;

	int i;
	for(i = 2; i <= (int) sqrt(n); i++) if(n % i == 0) return false;

	return true;
}

