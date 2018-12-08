#include <stdio.h>

void main()
{
	// tc: Test case // a,b,c: variables for the 3 salaries
	int a, b, c, max, min, tc;

	scanf("%d", &tc); // scanning of test case
	int cases[tc]; // creating a array for output

	for (int i = 0; i < tc; ++i) {
		scanf("%d%d%d", &a, &b, &c); // scanning in the salaries
		max = (a > b) ? ((a > c) ? a:c) : ((b > c) ? b:c);
		min = (a < b) ? ((a < c) ? a:c) : ((b < c) ? b:c);
		cases[i] = (a != max && a!= min) ? a : ((b != max && b!= min) ? b:c);
	}
	
	for (int i = 0; i < tc; ++i)
		printf("%s%d%s%d\n", "Case ", i+1 , ": ",cases[i]);
}