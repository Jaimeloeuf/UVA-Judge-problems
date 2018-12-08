#include <cstdlib>
#include <cstdio>
using namespace std;

int main()
{
	unsigned int n;
	scanf("%u", &n);
	printf("%s\n", "");
	step2:
	printf("%u\n", n);
	if(n == 1)
		return 0;
	if (n%2 == 1)
		n = (3*n) + 1;
	else
		n = n/2;
	goto step2;
	return 0;	
}