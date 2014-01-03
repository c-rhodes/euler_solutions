/*

Sum square difference
Problem 6

The sum of the squares of the first ten natural numbers is,
12 + 22 + ... + 102 = 385

The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)2 = 552 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

*/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv)
{
	int sum = 0; 
	int sum_squared = 0;
 	int sum_of_squares = 0;

	int i; 
	for(i = 1; i <= 100; i++)
	{
		sum += i;
		sum_of_squares += (int) pow((double) i, 2.0);
	}
	sum_squared = (int) pow((double) sum, 2.0);
	printf("%d\n", sum_squared - sum_of_squares);
	
	return 0;
} 
