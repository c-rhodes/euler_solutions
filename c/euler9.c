/*

Special Pythagorean triplet
Problem 9

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a2 + b2 = c2

For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	int k,i,l;
	int product = 0;

	for(k = 1; k < 1000; k++)
	{
		for(l = 1; l < 1000; l++)
			for(i = 1; i < 1000; i++)
				if(k + l + i == 1000 && k < l < i && k*k + l*l == i*i)
					product = k * l * i;

		if(product != 0){
			printf("%d\n", product);
			break;
		}
	}		
	return 0;
}
