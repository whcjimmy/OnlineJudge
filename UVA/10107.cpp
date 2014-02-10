#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

long long int num[10001];
int main()
{
    long long int X, p, t;
    p = 0;
    memset(num, 0, sizeof(num));
    while(scanf("%lld", &X) != EOF)
    {
	num[p++] = X;
	sort(num, num+p);
	if(p%2)
	{
	    t = (int)num[(p-1)/2];
	    printf("%lld\n", t);
	}
	else
	{
	    t = (int)((num[p/2]+num[p/2-1])/2);
	    printf("%lld\n", t);
	}
    }
    return 0;
}
