#include <stdio.h>

int main()
{
	int tc, a, b;
	scanf("%d", &tc);
	for (int i = 0; i < tc; ++i) {
		scanf("%d%d", &a, &b);
		printf("%s\n", (a < b) ? "<" : ((a > b) ? ">" : "="));
	}
}