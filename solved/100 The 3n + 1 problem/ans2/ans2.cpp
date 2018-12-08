#include <cstdlib>
#include <cstdio>
using namespace std;

int function(unsigned int n);

int main()
{
	start: // goto label
	unsigned int i, j; // create 2 variables
	scanf("%u %u", &i, &j);
	// Takes in 2 values and assign to the variables created earlier
	unsigned int counter1, counter2; // create 2 variables
	counter1 = function(i); // Assigning the value of f(i) to a variable
	counter2 = function(j); // Assigning the value of f(j) to a variable
	if(counter1 > counter2) // Checking which is the bigger value
		printf("%u %u %u\n", i, j, counter1);
	else
		printf("%u %u %u\n", i, j, counter2);
	goto start; // Relooping the program
	return 0;	
}

int function(unsigned int n)
{
	unsigned int counter = 0; // counter starts with a 0
	step2: // goto label
	counter = counter + 1; // Incrementing the value of counter after each iteration
	if(n == 1) // Checking if n=1
		return counter;
	if (n%2 != 0) // Checking if n is odd or even
		n = (3*n) + 1; // Do this if n is even
	else
		n = n/2; // Do this if n is odd
	goto step2;	// reloop until N is equals to step2
}