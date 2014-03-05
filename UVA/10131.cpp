#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

int dp[1005];
struct elephant
{
    int w, s, id;
};
bool cmp(elephant a, elephant b)
{
    if(a.w == b.w)
	return a.s>b.s;
    else
	return a.w<b.w;
}
int main()
{
    vector<int> b;
    int n, ans, t, tw, ts, tans, f, ff;
    n = ans = tw = ts = tans = f = ff = 0;
    elephant e[1005];
    elephant p[1005];
    memset(e, 0, sizeof(e));
    memset(p, 0, sizeof(p));
    memset(dp, 0, sizeof(dp));
    while(scanf("%d%d", &e[n].w, &e[n].s) != EOF)
    {
	e[n].id = n+1;
	n++;
    }
    sort(e, e+n, cmp);
    for(int i=0; i<=n; i++)
	dp[i] = 1;
    for(int i=0; i<n; i++)
	for(int j=i; j<n; j++)
	    if((e[i].w < e[j].w) && (e[i].s > e[j].s))
	    {
		dp[j] = max(dp[i] + 1, dp[j]);
		if(ans < dp[j])
		{
		    ans = dp[j];
		}
	    }
    printf("%d\n", ans);
    
    for(int i=0; i<n; i++)
	if(dp[i] == ans)
	    b.push_back(i);

    tw = 20000;
    ts = 0;
    tans = ans;
    while(!b.empty())
    {
	tans = ans;
	t = b.back();
	b.pop_back();
	for(int i=t; i>=0; i--)
	{
	    if((dp[i] == tans) && (e[i].s > ts) && (e[i].w < tw))
	    {
		p[tans] = e[i];
		tw = e[i].w;
		ts = e[i].s;
		tans--;
	    }
	    if(ff == 1) break;
	    if(tans == 0)
	    {
		f = 1;
		break;
	    }
	}
	if(f) break;
    }

    for(int i=1; i<=ans; i++)
	printf("%d\n", p[i].id);
    return 0;
}

