#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int m[100000], dp[100000];
int main()
{
    int n, ans, cases;
    cases = 1;
    memset(m, 0, sizeof(m));
    while(scanf("%d", &m[0]) && (m[0] != -1))
    {
	n = 1;
	ans = 0;
	while(scanf("%d",&m[n++]) && m[n-1] != -1);
	n--;
	for(int i=0; i<n; i++)
	    dp[i] = 1;
	for(int i=1; i<n; i++)
	    for(int j=0; j<i; j++)
		if(m[i] < m[j])
		    dp[i] = max(dp[i], dp[j]+1);
	for(int i=0; i<n; i++)
	    ans = max(ans, dp[i]); 
	if(cases != 1)
	    cout<<endl;
	cout<<"Test #"<<cases++<<":\n"<<"  maximum possible interceptions: "<<ans<<endl;
    }
    return 0;
}
