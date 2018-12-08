#include <stdio.h>
#include "cstdlib"

unsigned int maximum(unsigned int Max, unsigned int a) {
	return (Max > a) ? Max:a;
}

unsigned int function(unsigned int n);

int main()
{
	unsigned int i, j, currentMax, comparer, tmp1, tmp2; // creating of variables
	while(scanf("%u%u", &i, &j) == 2) // assigning the values
	{
		if(j > i)
		{
			tmp1 = j;
			tmp2 = i;
		}
		else if(i > j)
		{
			tmp1 = i;
			tmp2 = j;
		}
		else
		{
			tmp1 = function(i);
			printf("%u %u %u\n", i, j, tmp1);
			continue;
		}

		currentMax = function(tmp2);
		for(int tc = tmp2 + 1; tc <= tmp1; tc++)
		{
			comparer = function(tc);
			currentMax = maximum(currentMax, comparer);
		}
		printf("%u %u %u\n", i, j, currentMax);
	}
	return 0;
}

unsigned int function(unsigned int n)
{
	unsigned int counter = 0; // counter starts with a 0
	step2: // goto label
	counter = counter + 1; // Incrementing counter value with each iteration
	if(n == 1) // Checking if n=1
		return counter; // STOP when n=1 and return the counter value
	
	// if (n%2 != 0) // Checking if n is odd or even
	if (n ^ 1) // Checking if n is odd or even
		n = (3*n) + 1; // Do this if n is even
	else
		n = n/2; // Do this if n is odd
	goto step2;	// reloop until N is equals to step2
}