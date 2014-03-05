#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;

int m[100000], dp[100000], prev[100000];
int main()
{
    int N, n, p, ans;
    stack<int> mystack;
    char c[100];
    scanf("%d", &N);
    gets(c);
    gets(c);
    for(int t=0; t<N; t++)
    {
	ans = n = p = 0;
	memset(m, 0, sizeof(m));
	memset(dp, 0, sizeof(dp));
	memset(prev, -1, sizeof(prev));
	while(gets(c))
	{
	    if(c[0] == '\0')
		break;
	    sscanf(c, "%d", &m[n++]);
	}
	if(n != 0)
	{
	    for(int i=0; i<n; i++)
		dp[i] = 1;
	    for(int i=1; i<n; i++)
		for(int j=0; j<i; j++)
		    if((m[i] > m[j]) && (dp[i] < dp[j]+1))
		    {
			dp[i] = dp[j] + 1;
			prev[i] = j;
		    }
	    for(int i=0; i<n; i++)
		if(dp[i] >= ans)
		{
		    ans = dp[i];
		    p = i;
		}
	    while(prev[p] != -1)
	    {
		mystack.push(m[p]);
		p = prev[p];
	    }
	    mystack.push(m[p]);
	}
	printf("Max hits: %d\n", ans);
	while(!mystack.empty())
	{
	    printf("%d\n", mystack.top());
	    mystack.pop();
	}
	if(t != N-1)
	    printf("\n");
	while(!mystack.empty())
	    mystack.pop();
    }
    return 0;
}
