#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<stack>
using namespace std;

int seq[100000], dp[100000], prev[100000], temp[100000];
int main()
{
    int n, ans, poisition;
    n = ans = 0;
    memset(seq, 0, sizeof(seq));
    memset(dp, 1, sizeof(dp));
    memset(prev, -1, sizeof(prev));
    memset(temp, 0, sizeof(temp));
    stack<int> mystack;
    while(cin>>seq[n++]);
    n--;
    for(int i=0; i<n; i++)
	dp[i] = 1;
    for(int i=1; i<n; i++)
	for(int j=0; j<i; j++)
	    if((seq[i] > seq[j]) && (dp[i] < (dp[j]+1)) && (prev[i] < j))
	    {
		dp[i] = dp[j]+1;
		prev[i] = j;
	    }
    for(int i=0; i<n; i++)
	cout<<i<<" "<<seq[i]<<" "<<prev[i]<<endl;
    for(int i=0; i<n; i++)
	ans = max(ans, dp[i]);
    cout<<ans<<"\n-\n";
    while(prev[poisition] != -1)
    {
	mystack.push(seq[poisition]);
	poisition = prev[poisition];
    }
    mystack.push(seq[poisition]);
    while(!mystack.empty())
    {
	cout<<mystack.top()<<endl;
	mystack.pop();
    }
    return 0;
}
