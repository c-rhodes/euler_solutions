/*

Largest prime factor
Problem 3

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

compile: gcc -o euler3 euler3.c -lm

*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int is_prime(int);

int main(int argc, char *argv[])
{
	int s;
	long n = 600851475143;
	for(s = 1; s <= n / 2; s++){
		if(is_prime(s))
			if(n % s == 0)
				printf("prime factor: %d\n", s);
						
	}	

	return 0;
}

int is_prime(int n)
{
	if(n > 2 && n % 2 == 0) return false;

	int i;
	for(i = 2; i <= (int) sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}

	return true;
}
