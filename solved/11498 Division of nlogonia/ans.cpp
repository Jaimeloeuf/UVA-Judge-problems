// Ques 11498
#include "cstdio"
#include "cstdlib"
using namespace std;

int main()
{
	int k, div1, div2, resd1, resd2;
	while(scanf("%d", &k), k)
	{
		scanf("%d%d", &div1, &div2);
		for(int tmp = k; tmp > 0; tmp --)
		{
			if(scanf("%d%d", &resd1, &resd2) == 2)
			{
				if(resd1 == div1 || resd2 == div2)
					printf("%s\n", "divisa");
				else if(resd1 < div1 && resd2 < div2)
					printf("%s\n", "SO");
				else if(resd1 < div1 && resd2 > div2)
					printf("%s\n", "NO");
				else if(resd1 > div1 && resd2 < div2)
					printf("%s\n", "SE");
				else
					printf("%s\n", "NE");
			}
			else
				return 0;		
		}
	}
	return 0;
}