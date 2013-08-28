#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int correct[21], test[21], dp[21][21];
int main()
{
    int n, t;
    memset(correct, 0, sizeof(correct));
    memset(test, 0, sizeof(test));
    memset(dp, 0, sizeof(dp));
    cin>>n;
    for(int i=1; i<=n; i++)
    {
	cin>>t;
	correct[t] = i;
    }
    while(cin>>t)
    {
	test[t] = 1;
	for(int i=2; i<=n; i++)
	{
	    cin>>t;
	    test[t] = i;
	}
	for(int i=1; i<=n; i++)
	    for(int j=1; j<=n; j++)
		if(test[j] == correct[i])
		    dp[i][j] = dp[i-1][j-1] + 1;
		else
		    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
	cout<<dp[n][n]<<endl;
    }
    return 0;
}
