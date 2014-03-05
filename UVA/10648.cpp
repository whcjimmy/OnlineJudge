#include<cstdio>
#include<cstring>
using namespace std;

double dp[105][105];
int main()
{
    int m, n, cases;
    double prob;
    cases = 1;
    while(scanf("%d", &n) != EOF)
    {
	if(n == -1)
	    break;
	scanf("%d", &m);
	memset(dp, 0, sizeof(dp));
	dp[1][1] = 1;
	for(int i=2; i<=n; i++)
	    for(int j=1; j<=m; j++)
		dp[i][j] = dp[i-1][j-1]*(m-j+1)/m + dp[i-1][j]*j/m;
	prob = 1 - dp[n][m];
	printf("Case %d: %.7lf\n", cases++, prob);
    }
    return 0;
}
