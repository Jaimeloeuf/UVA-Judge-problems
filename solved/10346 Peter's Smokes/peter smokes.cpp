#include"cstdio"
#include<cmath>
using namespace std;

int function(int n, int k)
{
    int total = n;
    while(n/k >= 1)
    {
        total += floor(n/k);
        n = (n - (floor(n/k)*k)) + floor(n/k);
    }
    return total;
}

int main()
{
    int n, k;
    while(scanf("%d %d", &n, &k) != EOF)
        printf("%d\n", function(n, k));
    return 0;
}