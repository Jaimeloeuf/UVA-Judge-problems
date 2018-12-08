#include "cstdio"
using namespace std;

int main()
{
	int total, value = 0, tmp, tmp2;
	scanf("%d", &total);
	tmp = total;
	while(tmp--)
	{
		scanf("%d", &tmp2);
		value += tmp2;
	}
	if(value%total == 0)
	{
		printf("%d\n", value/total);
	}
	else
	{	
		if(value < total)
			printf("%d/%d\n", value, total);
		else
			printf("%d\n%d\n%d\n", value%total , value/total, total);
	}
	return 0;
}

search for gcd Algor
ques 12060