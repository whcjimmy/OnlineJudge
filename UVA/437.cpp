#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

struct block
{
    int x, y, z;
    friend bool operator< (const block &a, const block &b)
    {
	if(a.x == b.x)
	    return a.y > b.y;
	return a.x > b.x;
    }
}b[200];
int dp[200];
int main()
{
    int t[3], cases, ans;
    cases = 1;
    int n;
    while(scanf("%d", &n) && n != 0)
    {
	ans = 0;
	memset(b, 0, sizeof(b));
	memset(dp, 0, sizeof(dp));
	for(int i=0; i<n; i++)
	{
	    cin>>t[0]>>t[1]>>t[2];
	    b[i*6].x = b[i*6+1].x = b[i*6+2].y = b[i*6+3].y = b[i*6+4].z = b[i*6+5].z = t[0];
	    b[i*6].y = b[i*6+1].z = b[i*6+2].x = b[i*6+3].z = b[i*6+4].x = b[i*6+5].y = t[1];
	    b[i*6].z = b[i*6+1].y = b[i*6+2].z = b[i*6+3].x = b[i*6+4].y = b[i*6+5].x = t[2];
	}
	sort(b, b+n*6);
	dp[0] = b[0].z;
	for(int i=1; i<n*6; i++)
	{
	    dp[i] = b[i].z;
	    for(int j=0; j<i; j++)
		if((b[i].x<b[j].x) && (b[i].y<b[j].y) && (dp[i]<dp[j]+b[i].z))
		    dp[i] = dp[j] + b[i].z;
	    if(dp[i] > ans)
		ans = dp[i];
	}
	cout<<"Case "<<cases++<<": maximum height = "<<ans<<endl;
    }
    return 0;
}
