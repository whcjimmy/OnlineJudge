#include<cstdio>
#include<cstring>
#include<algorithm>
#define ios_base ::sync_with_stdio(0);cin.tie(0);
using namespace std;

struct cow
{
    long long int T, D;
}c[100005];

bool cmp(cow a, cow b)
{
    return a.T*b.D < a.D*b.T;
}
int main()
{
    int N;
    long long int ans, temp, total, T, D;
    while(scanf("%d", &N) != EOF)
    {
	ans = temp = total = 0;
	for(int i=0; i<N; i++)
	{
	    scanf("%lld%lld", &c[i].T, &c[i].D);
	    total += c[i].D;
	}
	sort(c, c+N, cmp);
	for(int i=0; i<N; i++)
	{
	    total -= c[i].D;
	    ans += 2*c[i].T*total;
	}
	printf("%lld\n", ans);
    }
    return 0;
}
