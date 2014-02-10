#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

char str[1005];
int dp[1005];
int main()
{
    int length, cases, ans;
    cases = 1;
    while(scanf("%s", str) != EOF)
    {
	if(str[0] == 'e' &&str[1] == 'n' && str[2] == 'd')
	    break;
	ans = 0;
	length = strlen(str);
	for(int i=0; i<length; i++)
	    dp[i] = 1;
	for(int i=0; i<length;i++)
	    for(int j=i; j<length; j++)
		if(str[i] < str[j])
		    dp[j] = max(dp[i]+1, dp[j]);
	for(int i=0; i<length; i++)
	    ans = max(ans, dp[i]);
	printf("Case %d: %d\n", cases++, ans);
    }
    return 0;
}

