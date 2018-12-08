#include <stdio.h>

#define max(a, b) ((a > b) ? a:b)

void main()
{
	int tc; // Test case
	scanf("%d", &tc); // scanning of test case
	int cases[tc]; // creating a array for output
	for (int i = 0; i < tc; ++i) // If i < tc reloop with increment
	{
		int a, b, c; // creating variables for the 3 salaries
		scanf("%d%d%d", &a, &b, &c); // scanning in the salaries
		
		// Checking starts here
		if (a == b || a == c || b == c)
			return 0;

		if(a > max(b, c))
		{
			if(b > c)
				cases[i] = b;
			else
				cases[i] = c;
		}
		else if(b > max(a, c))
		{
			if(a > c)
				cases[i] = a;
	    	else
	    		cases[i] = c;
	    }
	    else if(c > max(a, b))
	    {
	    	if(a > b)
	    		cases[i] = a;
	    	else
	    		cases[i] = b;
	    }
	}

	// Printing of results
	for (int i = 0; i < tc; ++i)
		printf("%s%d%s%d\n", "Case ", i+1 , ": ",cases[i]);
}