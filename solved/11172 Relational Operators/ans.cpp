#include "cstdio"
using namespace std;

int main()
{
	int tc;
	scanf("%d", &tc);
	for (int i = 0; i < tc; ++i)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		if(a < b)
			printf("%s\n", "<");
		else if(a > b)
			printf("%s\n", ">");
		else
			printf("%s\n", "=");
	}
	return 0;
}