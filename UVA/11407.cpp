#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

int dp[10002];
int main()
{
    int t, N;
    for(int i=1; i<=10000; i++)
	dp[i] = 9999;
    for(int i=1; i<=10000; i++)
	for(int j=1; j<=(int)sqrt(i); j++)
	    if(dp[i-j*j]+1 < dp[i])
		dp[i] = dp[i-j*j]+1;
    scanf("%d", &t);
    while(t--)
    {
	scanf("%d", &N);
	printf("%d\n", dp[N]);
    }
    return 0;
}
