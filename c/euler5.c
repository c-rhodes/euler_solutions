/*

Smallest multiple
Problem 5

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

*/


#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{	
	int i,t,k;
	bool divisible;

	i = 2;
	while(true)
	{
		divisible = true;
		for(k = 1; k <= 20; k++)
		{
			if(i % k != 0){
				divisible = false;
				break;
			}
		}
		if(divisible){
			printf("%d\n", i);
			break;
		}

		i += 2;
	}
	return 0;		
}
