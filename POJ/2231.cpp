#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

long long int cow[10005];
int main()
{
    long long int N, ans;
    while(scanf("%lld", &N) != EOF)
    {
	ans = 0;
	for(int i=0; i<N; i++)
	    scanf("%lld", &cow[i]);
	sort(cow, cow+N);
	for(int i=0; i<N; i++)
	    ans += 2*(cow[N-i-1] - cow[i])*(N-1-i);
	printf("%lld\n", ans);
    }
    return 0;
}
