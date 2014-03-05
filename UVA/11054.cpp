#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

long long int wine[100005];
int main()
{
    long long int n, ans;
    while(scanf("%lld", &n) != EOF)
    {
	if(n == 0)
	    break;
	ans = 0;
	for(long long int i=0; i<n; i++)
	    scanf("%lld", &wine[i]);
	for(long long int i=0; i<(n-1); i++)
	{
	    ans += abs(wine[i]);
	    wine[i+1] += wine[i];
	}
	printf("%lld\n", ans);
    }
    return 0;
}
