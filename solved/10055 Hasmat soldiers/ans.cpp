#include <stdio.h>

void main() {
	long a, b;
	while(scanf("%li%li", &a, &b) == 2)
		printf("%li\n", (a < b) ? (b - a):(a - b));
}