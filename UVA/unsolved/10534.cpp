#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int m[10002], up[10002], down[10002];
int main()
{
    int N, ans, dir;
    while(scanf("%d", &N) != EOF)
    {
	ans = dir = 0;
	for(int i=0; i<N; i++)
	{
	    up[i] = down [i] = 1;
	    scanf("%d", &m[i]);
	}
	for(int i=0; i<(N-1); i++)
	    for(int j=(i+1); j<N; j++)
	    {
		if(m[i] < m[j])
		    up[j] = max(up[i]+1, up[j]);
		if(m[N-i] < m[N-j])
		    down[N-j] = max(down[N-i]+1, down[N-j]);
	    }
	/*for(int i=(N-1); i>=1; i--)
	    for(int j=(i-1); j>=0; j--)
		if(m[i] < m[j])
		    down[j] = max(down[i]+1, down[j]);
		    */
	for(int i=0; i<N; i++)
	    if((up[i] <= down[i]) || (up[i] >= down[i]))
		ans = max(ans, min(up[i], down[i])*2-1);
	printf("%d\n", ans);
    }
    return 0;
}
